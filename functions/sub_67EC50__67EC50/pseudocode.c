// Verified computes total estimate cost F at +0 as path cost G at +4 plus heuristic H at +8.
void __thiscall TESConnectedPoint_RecomputeTotalEstimateCost(TESConnectedPoint *this)
{
  this->totalEstimateCost = this->heuristicCost + this->pathCost; /*0x67ec56*/
}
