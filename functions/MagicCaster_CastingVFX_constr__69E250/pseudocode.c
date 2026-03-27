float *__thiscall MagicCaster_CastingVFX_constr(float *this, int a2, int a3)
{
  int v4; // edi
  int v6; // [esp+0h] [ebp-20h]
  int v7; // [esp+4h] [ebp-1Ch]
  int v8; // [esp+8h] [ebp-18h]
  int v9; // [esp+Ch] [ebp-14h]
  int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h]

  *this = 0.0;
  *(this + 2) = 0.0;
  *(this + 1) = 0.0;
  v4 = *((_DWORD *)this + 2);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 2) = 0.0;
  }
  *(this + 3) = 1.0;
  *(this + 4) = 0.0;
  *(this + 5) = 0.0;
  *((_BYTE *)this + 0x18) = 0;
  MagicCaster_CastingVFX_initialize__(this, a2, a3, v6, v7, v8, v9, (int)this, v11, v12, 1);
  return this;
}
