int __thiscall Player_SetBirthsign(MagicTarget *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // edi
  int i; // edi
  int AVFromGroupOffset; // eax
  int result; // eax

  v3 = *((_DWORD *)this + 0x191);
  if ( v3 )
  {
    v4 = (_DWORD *)(v3 + 0x3C);
    if ( v3 != 0xFFFFFFC4 )
    {
      do
      {
        if ( !*v4 )
          break;
        ((void (__thiscall *)(MagicTarget *, _DWORD))this->vtbl[0x10].PlayAbsorbShader)(this, *v4);
        v4 = (_DWORD *)v4[1];
      }
      while ( v4 );
    }
  }
  MagicTarget_ProcessEffects(this + 0xD, COERCE_INT(0.0));
  *((_DWORD *)this + 0x191) = a2;
  if ( a2 )
  {
    v5 = (_DWORD *)(a2 + 0x3C);
    if ( a2 != 0xFFFFFFC4 )
    {
      do
      {
        if ( !*v5 )
          break;
        ((void (__thiscall *)(MagicTarget *, _DWORD))this->vtbl[0x10].PlayReflectShader)(this, *v5);
        v5 = (_DWORD *)v5[1];
      }
      while ( v5 );
    }
  }
  for ( i = 0; i < 0x15; ++i )
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i);
    result = sub_663C50((Actor *)this, *(float *)&AVFromGroupOffset);
  }
  return result;
}
