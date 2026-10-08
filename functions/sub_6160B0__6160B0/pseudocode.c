void __thiscall sub_6160B0(Actor **this)
{
  float *v2; // eax
  int v3; // eax
  float v4; // [esp+10h] [ebp-10h]
  float v5; // [esp+14h] [ebp-Ch]
  float v6; // [esp+18h] [ebp-8h]
  float v7; // [esp+1Ch] [ebp-4h]

  sub_5E05F0(*(this + 0xF), 0xF); /*0x6160bb*/
  ((void (__thiscall *)(LowProcess *, int, _DWORD))(*(this + 0xF))->members.super.process->Unk_B0)( /*0x6160d5*/
    (*(this + 0xF))->members.super.process,
    0x200,
    0);
  ((void (__thiscall *)(LowProcess *, int, _DWORD))(*(this + 0xF))->members.super.process->Unk_B0)( /*0x6160ec*/
    (*(this + 0xF))->members.super.process,
    0x100,
    0);
  if ( !unk_B333B8 ) /*0x6160ee*/
  {
    v2 = (*(this + 0xF))->vtbl->super.super.GetPos(*(this + 0xF)); /*0x616106*/
    v5 = *((float *)this + 0x66) - *v2; /*0x616110*/
    v6 = *((float *)this + 0x67) - v2[1]; /*0x61611d*/
    v7 = *((float *)this + 0x68) - v2[2]; /*0x61612a*/
    v4 = v5 * v5 + v6 * v6 + v7 * v7; /*0x616152*/
    if ( v4 >= unk_B372C8 * unk_B372C8 ) /*0x616165*/
    {
      v3 = (int)*(this + 0x1B); /*0x616167*/
      if ( v3 != 4 && v3 != 7 && v3 != 9 && v3 != 8 && v3 != 0xC ) /*0x616181*/
        *((_BYTE *)this + 0x191) = 1; /*0x616183*/
    }
  }
}
