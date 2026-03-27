void __thiscall sub_7A34F0(void *this, _DWORD *a2)
{
  int v3; // [esp+8h] [ebp-28h] BYREF
  unsigned int v4; // [esp+Ch] [ebp-24h]
  int v5; // [esp+1Ch] [ebp-14h]
  unsigned int v6; // [esp+20h] [ebp-10h]
  int v7; // [esp+2Ch] [ebp-4h]

  v6 = 0xF;
  v5 = 0;
  LOBYTE(v4) = 0;
  sub_414420((int)&v3, a2, 0, 0xFFFFFFFF);
  v7 = 0;
  sub_414420((int)this + 0x24, &v3, 0, 0xFFFFFFFF);
  if ( v6 >= 0x10 )
    FormHeapFree(v4);
}
