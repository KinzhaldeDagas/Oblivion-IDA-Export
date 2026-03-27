void __thiscall sub_607120(int *this)
{
  Actor **v2; // edi
  Actor *v3; // esi
  int v4; // eax
  float v5; // [esp+10h] [ebp-4h]
  float v6; // [esp+10h] [ebp-4h]

  v2 = (Actor **)(this + 7);
  if ( this != (int *)0xFFFFFFE4 )
  {
    do
    {
      v3 = *v2;
      if ( !*v2 )
        break;
      if ( !sub_5E6C60(*v2) )
      {
        sub_605F60(this, (int)v3, 0);
        v5 = (float)v4;
        if ( v3 == (Actor *)*(this + 2) )
          v5 = v5 + v5;
        v6 = v5 * dbl_A3D360;
        ((void (__thiscall *)(Actor *, _DWORD, _DWORD))v3->vtbl->Unk_DD)(v3, *(this + 3), LODWORD(v6));
      }
      v2 = (Actor **)v2[1];
    }
    while ( v2 );
  }
}
