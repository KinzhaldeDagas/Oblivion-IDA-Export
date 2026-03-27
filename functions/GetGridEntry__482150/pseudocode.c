GridEntry *__thiscall GetGridEntry(GridCellArray *this, int a2, int a3)
{
  return &this->grid[a3 + a2 * this->size];
}
