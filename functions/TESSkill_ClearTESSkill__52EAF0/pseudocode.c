void __thiscall TESSkill_ClearTESSkill(char *this)
{
  void (__thiscall ***v2)(_DWORD); // edi
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // edi

  *((_DWORD *)this + 0xB) = 0xFFFFFFFF;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((float *)this + 0xE) = 1.0;
  *((float *)this + 0xF) = 1.0;
  v2 = (void (__thiscall ***)(_DWORD))(this + 0x40);
  v3 = 4;
  do
  {
    (**v2)(v2);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 0x90))(this, 0);
  v4 = this + 0x10;
  if ( v4 )
  {
    if ( v4[1] )
    {
      do
      {
        v5 = *(_DWORD *)(v4[1] + 4);
        FormHeapFree(v4[1]);
        v4[1] = v5;
      }
      while ( v5 );
    }
    *v4 = 0;
  }
}
