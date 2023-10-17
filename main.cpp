#include <iostream>
#include "anitomy/anitomy.h"

int main() {
    anitomy::Anitomy anitomy;
    anitomy.Parse(L"[Ouroboros]_Fullmetal_Alchemist_Brotherhood_-_01.mkv");

    const auto &elements = anitomy.elements();

    // Elements are iterable, where each element is a category-value pair
    for (const auto &element: elements) {
        std::wcout << element.first << '\t' << element.second << '\n';
    }
    std::wcout << '\n';

    // You can access values directly by using get() and get_all() methods
    std::wcout << elements.get(anitomy::kElementAnimeTitle) << L" #" <<
               elements.get(anitomy::kElementEpisodeNumber) << L" by " <<
               elements.get(anitomy::kElementReleaseGroup) << '\n';

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
