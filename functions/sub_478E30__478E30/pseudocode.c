void __usercall sub_478E30(char *this@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  int v6; // ecx
  char v7; // al

  v6 = *((_DWORD *)this + 0x4B);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 4) == 0x1A )
      sub_478780(this, a2, a3, a4, a5, (int)(this + 0x12C), 1, 0);
  }
  if ( *((PlayerCharacter **)this + 0x54) == TESDataHandler_g_PlayerRef )
  {
    v7 = sub_65D770(TESDataHandler_g_PlayerRef, (int)this);
    sub_663870(TESDataHandler_g_PlayerRef, 0, v7);
  }
}
