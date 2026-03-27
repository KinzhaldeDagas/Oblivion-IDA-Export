// positive sp value has been detected, the output may be wrong!
__int16 __usercall AVCollection_Save_::SaveArray@<ax>(
        _WORD *a1@<ebx>,
        __int16 a2@<bp>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 a8)
{
  float *v8; // eax
  __int16 v10; // [esp-8h] [ebp-8h]

  v8 = *(float **)(a3 + 0x10);
  if ( !v8 )
    return AVCollection_Save_::Done(a4, a5, a6, a7, a8);
  if ( sub_65C220(a3, *v8) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 4)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 8)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0xC)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x10)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x14)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x18)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x1C)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x20)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x24)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x28)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x2C)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x30)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x34)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x38)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x3C)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x40)) )
    v10 += a2;
  if ( sub_65C220(a3, *(float *)(*(_DWORD *)(a3 + 0x10) + 0x44)) )
  {
    *a1 = a2 + v10;
    return a2 + v10;
  }
  else
  {
    *a1 = v10;
    return v10;
  }
}
