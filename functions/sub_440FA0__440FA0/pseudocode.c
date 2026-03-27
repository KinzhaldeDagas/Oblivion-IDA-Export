void __thiscall sub_440FA0(int *this, int a2, __int16 a3)
{
  int *v3; // esi
  int *v4; // eax
  int v5; // ecx
  int v6; // eax

  v3 = this + 0x23;
  v4 = this + 0x23;
  if ( this != (int *)0xFFFFFF74 )
  {
    do
    {
      v5 = *v4;
      if ( !*v4 )
        break;
      if ( *(_DWORD *)v5 == a2 )
      {
        *(_WORD *)(v5 + 4) += a3;
        return;
      }
      v4 = (int *)v4[1];
    }
    while ( v4 );
  }
  v6 = FormHeapAlloc(8u);
  *(_WORD *)(v6 + 4) = a3;
  *(_DWORD *)v6 = a2;
  BSSimpleList_PushFront(v3, v6);
}
