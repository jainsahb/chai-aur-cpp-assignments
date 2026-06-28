#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Challenge 4 :  Tea brewing methods

void wait(int seconds) {
    this_thread::sleep_for(chrono::seconds(seconds));
}

void teaByBoiling() {

    std::cout << "============================================" << std::endl;
    std::cout << "  HOW TO MAKE TEA (BOILING METHOD) - GUIDE  " << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << std::endl;

    // Step 1: Ingredients
    std::cout << "[Step 1] Gather Your Ingredients & Tools" << std::endl;
    std::cout << "  - Water (1 cup)" << std::endl;
    std::cout << "  - Milk (1/4 cup, optional)" << std::endl;
    std::cout << "  - Tea leaves or tea bag (1 tsp / 1 bag)" << std::endl;
    std::cout << "  - Sugar or sweetener (to taste)" << std::endl;
    std::cout << "  - Saucepan, strainer, and a mug" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    wait(1);

    // Step 2: Boiling Water
    std::cout << "[Step 2] Boil the Water" << std::endl;
    std::cout << "  -> Pour 1 cup of water into the saucepan." << std::endl;
    std::cout << "  -> Turn on the stove to medium-high heat." << std::endl;
    std::cout << "  -> Wait for the water to reach a rolling boil..." << std::endl;
    wait(2);

    // Step 3: Adding Tea
    std::cout << "[Step 3] Add Tea Leaves and Aromatics" << std::endl;
    std::cout << "  -> Add 1 teaspoon of tea leaves to the boiling water." << std::endl;
    std::cout << "  -> (Optional) Add crushed ginger or cardamom now." << std::endl;
    std::cout << "  -> Lower the heat and let it simmer for 2-3 minutes." << std::endl;
    wait(2);

    // Step 4: Adding Milk and Sugar
    std::cout << "[Step 4] Add Milk and Sweetener" << std::endl;
    std::cout << "  -> Pour in 1/4 cup of milk." << std::endl;
    std::cout << "  -> Add sugar according to your preference." << std::endl;
    std::cout << "  -> Bring the mixture back to a boil, then turn off the heat." << std::endl;
    wait(2);

    // Step 5: Serve
    std::cout << "[Step 5] Strain and Serve" << std::endl;
    std::cout << "  -> Place a tea strainer over your favorite mug." << std::endl;
    std::cout << "  -> Carefully pour the hot tea into the mug." << std::endl;
    std::cout << "  -> Let it cool slightly before sipping." << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    wait(1);

    std::cout << "Success: Your cup of tea is ready! Enjoy!" << std::endl;
    std::cout << "============================================" << std::endl;
}

void teaBySteeping() {
    std::cout << "============================================" << std::endl;
    std::cout << "  HOW TO MAKE TEA (STEEPING METHOD) - GUIDE  " << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << std::endl;

    // Step 1: Ingredients
    std::cout << "[Step 1] Gather Your Ingredients & Tools" << std::endl;
    std::cout << "  - Fresh water (1 cup)" << std::endl;
    std::cout << "  - Tea bag or loose tea leaves (1 tsp)" << std::endl;
    std::cout << "  - Teapot or a mug" << std::endl;
    std::cout << "  - Kettle (electric or stovetop)" << std::endl;
    std::cout << "  - Timer, infuser (if using loose leaves), and sweetener" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    wait(1);

    // Step 2: Heat Water
    std::cout << "[Step 2] Heat the Water" << std::endl;
    std::cout << "  -> Pour 1 cup of fresh water into your kettle." << std::endl;
    std::cout << "  -> Heat the water until it reaches a boil." << std::endl;
    std::cout << "  -> Note: For green or white tea, let it cool for 1 minute." << std::endl;
    wait(2);

    // Step 3: Prepare Vessel
    std::cout << "[Step 3] Prepare the Mug or Teapot" << std::endl;
    std::cout << "  -> Place the tea bag or loose leaves into the mug." << std::endl;
    std::cout << "  -> If using loose leaves, ensure they are inside an infuser." << std::endl;
    wait(1);

    // Step 4: Pour and Steep
    std::cout << "[Step 4] Pour Hot Water and Steep" << std::endl;
    std::cout << "  -> Carefully pour the hot water directly over the tea." << std::endl;
    std::cout << "  -> Cover the mug to trap the heat and volatile oils." << std::endl;
    std::cout << "  -> Wait 3 to 5 minutes for the tea to steep..." << std::endl;
    wait(3);

    // Step 5: Finish
    std::cout << "[Step 5] Remove Tea and Customize" << std::endl;
    std::cout << "  -> Remove the tea bag or infuser from the water." << std::endl;
    std::cout << "  -> Avoid squeezing the tea bag to prevent bitterness." << std::endl;
    std::cout << "  -> Stir in sugar, honey, or lemon if desired." << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    wait(1);

    std::cout << "Success: Your steeped tea is perfectly brewed! Enjoy!" << std::endl;
    std::cout << "============================================" << std::endl;
}

void icedTeaMethod() {
    std::cout << "============================================" << std::endl;
    std::cout << "      HOW TO MAKE ICED TEA - GUIDE          " << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << std::endl;

    // Step 1: Ingredients
    std::cout << "[Step 1] Gather Your Ingredients & Tools" << std::endl;
    std::cout << "  - Water (2 cups total - 1 for boiling, 1 cold)" << std::endl;
    std::cout << "  - 2 Black tea bags (or 2 tsp loose tea leaves)" << std::endl;
    std::cout << "  - Ice cubes (1 to 2 cups)" << std::endl;
    std::cout << "  - Sugar, honey, or simple syrup (to taste)" << std::endl;
    std::cout << "  - Lemon slices or fresh mint leaves for garnish" << std::endl;
    std::cout << "  - Heatproof pitcher and a tall serving glass" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    wait(1);

    // Step 2: Brew Concentrate
    std::cout << "[Step 2] Brew a Strong Tea Concentrate" << std::endl;
    std::cout << "  -> Bring 1 cup of water to a rolling boil." << std::endl;
    std::cout << "  -> Pour the hot water over the tea bags in a heatproof jug." << std::endl;
    std::cout << "  -> Let it steep for 5 minutes to make a strong base." << std::endl;
    std::cout << "  -> Note: It must be strong since ice will dilute it later." << std::endl;
    wait(2);

    // Step 3: Sweeten and Dilute
    std::cout << "[Step 3] Sweeten and Dilute the Mix" << std::endl;
    std::cout << "  -> Remove and discard the tea bags." << std::endl;
    std::cout << "  -> Stir in your sugar or honey while the tea is still hot." << std::endl;
    std::cout << "  -> Pour in 1 cup of cold water to cool the mixture down." << std::endl;
    wait(2);

    // Step 4: Chill
    std::cout << "[Step 4] Cool it Down" << std::endl;
    std::cout << "  -> Let the pitcher sit at room temperature for a bit." << std::endl;
    std::cout << "  -> Put it in the refrigerator until it is thoroughly chilled." << std::endl;
    wait(2);

    // Step 5: Serve
    std::cout << "[Step 5] Assemble and Serve" << std::endl;
    std::cout << "  -> Fill your tall serving glass to the brim with ice cubes." << std::endl;
    std::cout << "  -> Pour the chilled tea concentrate directly over the ice." << std::endl;
    std::cout << "  -> Garnish with a fresh lemon slice and a sprig of mint." << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    wait(1);

    std::cout << "Success: Your refreshing iced tea is ready! Enjoy!" << std::endl;
    std::cout << "============================================" << std::endl;
}

int main() {
    int userChoice;

    cout << "----Welcome to the Chai Masterclass----" << endl;
    cout << "Below are different methods for Preparing Tea" << endl;
    cout << "1. Boiling Method" << endl;
    cout << "2. Steeping Method" << endl;
    cout << "3. Iced Tea Method" << endl;
    cout << "Enter corresponding methods' number to see its full instructions: " << endl;
    cin >> userChoice;

    switch(userChoice) {
        case 1: 
            // Boiling
            teaByBoiling();
            break;
        case 2:
            // Steeping
            teaBySteeping();
            break;
        case 3:
            // Iced Tea
            icedTeaMethod();
            break;
        default:
            cout << "Invalid Input!\n";
            break;
    }

    cout << "Thank you for attending this Masterclass\n";
    return 0;
}