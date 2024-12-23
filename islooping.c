function isLooping(condition: any, pmll: PMLL, arll: ARLL, efll: EFLL): boolean {
  // Check for the specific conditions that are causing the loop
  if (condition === "looping" && pmll.isProcessing() && arll.isProcessing() && efll.isProcessing()) {
    return true;
  } else {
    return false;
  }
}
