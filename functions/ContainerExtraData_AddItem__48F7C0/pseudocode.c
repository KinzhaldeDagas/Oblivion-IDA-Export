void __thiscall ContainerExtraData_AddItem(
        float *this,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  *(this + 2) = flt_A30634;
  ContainerExtraData_AddItem_::ValidateItemExtraDataList(
    a3 == 0,
    a3,
    this,
    a2,
    (int)a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13);
}
