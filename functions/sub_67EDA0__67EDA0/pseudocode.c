// Verified resets graph-node scratch state: clears F/G/H at +0/+4/+8, predecessor at +0x0C, and masks flags at +0x10 with 0x68, preserving bits 0x08/0x20/0x40 while clearing the other transient bits.
void __thiscall GraphNode_ResetTransientSearchState(TESConnectedPoint *this)
{
  this->stateFlags &= 0x68u; /*0x67eda2*/
  this->totalEstimateCost = 0.0; /*0x67eda6*/
  this->predecessor = 0; /*0x67eda8*/
  this->pathCost = 0.0; /*0x67edaf*/
  this->heuristicCost = 0.0; /*0x67edb2*/
}
