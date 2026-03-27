void __thiscall sub_663520(LONG this, int a2)
{
  int *v7; // ecx
  int *v8; // ecx
  _DWORD **sound; // ecx
  unsigned int v10; // edi

  v7 = *(int **)(this + 0x764);
  if ( v7 )
  {
    if ( sub_6B7260(v7) )
      sub_6B7240(*(int **)(this + 0x764));
  }
  v8 = *(int **)(this + 0x764);
  if ( v8 && a2 == *(_DWORD *)(this + 0x760) && sub_6B73A0(v8) )
  {
    sound = (_DWORD **)OSGlobals->sound;
    if ( sound )
      sub_6AC3E0(sound, **(_DWORD **)(this + 0x764), this);
    sub_6B7190(*(int **)(this + 0x764), 0);
  }
  else
  {
    v10 = *(_DWORD *)(this + 0x764);
    if ( v10 )
    {
      sub_6B73E0(*(_DWORD **)(this + 0x764));
      FormHeapFree(v10);
      *(_DWORD *)(this + 0x764) = 0;
      *(_DWORD *)(this + 0x760) = 0;
    }
    *(_DWORD *)(this + 0x760) = a2;
    *(_DWORD *)(this + 0x764) = sub_65AC50((_DWORD *)this, a2, 0, 2, 1);
  }
}
