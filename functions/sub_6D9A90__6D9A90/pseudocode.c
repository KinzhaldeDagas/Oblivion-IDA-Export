bool __thiscall sub_6D9A90(float *this, int a2)
{
  int v4; // ecx

  if ( !(unsigned __int8)sub_6EC2E0(a2) || sub_6D5A40(this + 3, (float *)(a2 + 0xC)) )
    return 0;
  v4 = *((_DWORD *)this + 7);
  if ( v4 )
    return *(_DWORD *)(a2 + 0x1C)
        && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x1C));
  return !*(_DWORD *)(a2 + 0x1C);
}
