// SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
int *__thiscall OB_NiSmartPointer_Assign_010201A0(int *this, int *incoming)
{
  int v3; // esi
  int v4; // eax
  bool v5; // zf

  v3 = *this; /*0x55e2a9*/
  if ( *this != *incoming ) /*0x55e2ad*/
  {
    if ( v3 ) /*0x55e2b1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x55e2b7*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x55e2cd*/
    }
    v4 = *incoming; /*0x55e2cf*/
    v5 = *incoming == 0; /*0x55e2d1*/
    *this = *incoming; /*0x55e2d3*/
    if ( !v5 ) /*0x55e2d5*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x55e2db*/
  }
  return this; /*0x55e2e3*/
}
