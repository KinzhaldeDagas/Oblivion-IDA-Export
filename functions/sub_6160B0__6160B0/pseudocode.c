void __thiscall sub_6160B0(Actor **this)
{
  float *v2; // eax
  int v3; // eax
  float v4; // [esp+10h] [ebp-10h]
  float v5; // [esp+14h] [ebp-Ch]
  float v6; // [esp+18h] [ebp-8h]
  float v7; // [esp+1Ch] [ebp-4h]

  sub_5E05F0(*(this + 0xF), 0xF);
  ((void (__thiscall *)(LowProcess *, int, _DWORD))(*(this + 0xF))->members.super.process->Unk_B0)(
    (*(this + 0xF))->members.super.process,
    0x200,
    0);
  ((void (__thiscall *)(LowProcess *, int, _DWORD))(*(this + 0xF))->members.super.process->Unk_B0)(
    (*(this + 0xF))->members.super.process,
    0x100,
    0);
  if ( !byte_B333B8 )
  {
    v2 = (*(this + 0xF))->vtbl->super.super.GetPos(*(this + 0xF));
    v5 = *((float *)this + 0x66) - *v2;
    v6 = *((float *)this + 0x67) - v2[1];
    v7 = *((float *)this + 0x68) - v2[2];
    v4 = v5 * v5 + v6 * v6 + v7 * v7;
    if ( v4 >= flt_B372C8 * flt_B372C8 )
    {
      v3 = (int)*(this + 0x1B);
      if ( v3 != 4 && v3 != 7 && v3 != 9 && v3 != 8 && v3 != 0xC )
        *((_BYTE *)this + 0x191) = 1;
    }
  }
}
