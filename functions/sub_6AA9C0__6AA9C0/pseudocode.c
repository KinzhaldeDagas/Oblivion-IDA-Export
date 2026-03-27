int __thiscall sub_6AA9C0(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int v4; // ebx
  _DWORD *v5; // edi
  int v7; // [esp-8h] [ebp-28h]
  int v8; // [esp+10h] [ebp-10h] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-4h]

  v8 = 0;
  v3 = (_DWORD *)*(this + 0xC1);
  v7 = *(_DWORD *)(*(_DWORD *)a2 + 0xC);
  v9 = 0;
  sub_4A1AB0(v3, v7, &v8);
  NiTMap_RemoveAt((_DWORD *)*(this + 0xC1), *(_DWORD *)(*(_DWORD *)a2 + 0xC));
  v4 = v8;
  if ( v8 )
    sub_6F9710(v8);
  NiTMap_RemoveAt((_DWORD *)*(this + 0xC0), *(_DWORD *)(*(_DWORD *)a2 + 0xC));
  v5 = *(_DWORD **)a2;
  if ( *(_DWORD *)a2 )
  {
    sub_6B6700(v5);
    FormHeapFree((unsigned int)v5);
  }
  v9 = 0xFFFFFFFF;
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  return 0;
}
