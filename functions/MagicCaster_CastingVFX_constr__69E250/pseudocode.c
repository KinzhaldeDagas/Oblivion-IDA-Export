float *__thiscall MagicCaster_CastingVFX_constr(float *this, int a2, int a3)
{
  int v4; // edi
  int v6; // [esp+0h] [ebp-20h]
  int v7; // [esp+4h] [ebp-1Ch]
  int v8; // [esp+8h] [ebp-18h]
  int v9; // [esp+Ch] [ebp-14h]
  int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h]

  *this = 0.0; /*0x69e27c*/
  *(this + 2) = 0.0; /*0x69e282*/
  *(this + 1) = 0.0; /*0x69e285*/
  v4 = *((_DWORD *)this + 2); /*0x69e288*/
  if ( v4 ) /*0x69e292*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x69e298*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x69e2ae*/
    *(this + 2) = 0.0; /*0x69e2b0*/
  }
  *(this + 3) = 1.0; /*0x69e2bd*/
  *(this + 4) = 0.0; /*0x69e2c3*/
  *(this + 5) = 0.0; /*0x69e2c9*/
  *((_BYTE *)this + 0x18) = 0; /*0x69e2cc*/
  MagicCaster_CastingVFX_initialize__(this, a2, a3, v6, v7, v8, v9, (int)this, v11, v12, 1u); /*0x69e2cf*/
  return this; /*0x69e2d6*/
}
