int __thiscall sub_411100(int this)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // ecx

  result = *(unsigned __int16 *)(this + 0xB6); /*0x411103*/
  v3 = *(_DWORD *)(this + 0xDC); /*0x41110d*/
  if ( (_WORD)result ) /*0x411117*/
    v4 = **(_DWORD **)(this + 0xB0); /*0x411123*/
  else
    v4 = 0; /*0x411119*/
  if ( *(_DWORD *)(v3 + 0x1C) != v4 ) /*0x411127*/
  {
    if ( (_WORD)result ) /*0x41112c*/
      v5 = **(_DWORD **)(this + 0xB0); /*0x411138*/
    else
      v5 = 0; /*0x41112e*/
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 0x84))(v5, v3, 1); /*0x411145*/
    return NiAVObject_UpdateNiAVObject(*(NiAVObject **)(this + 0xDC), 0.0, 1); /*0x411155*/
  }
  return result; /*0x41115a*/
}
