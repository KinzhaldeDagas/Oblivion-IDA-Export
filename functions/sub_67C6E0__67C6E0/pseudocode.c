void __thiscall sub_67C6E0(float *this, Actor *a2, char a3)
{
  int v4; // ecx
  int v5; // ebp
  Actor *v6; // ebx
  int v7; // eax
  LowProcess *process; // ecx
  int *SafeFloatPointer; // eax
  int v10; // ecx

  if ( a3 ) /*0x67c6e8*/
  {
    v4 = *((_DWORD *)this + 0xF); /*0x67c70c*/
    if ( *(float *)(v4 + 0x20) <= 0.0 ) /*0x67c717*/
    {
      v5 = Game_RandomLargeInteger(0); /*0x67c732*/
      v6 = *(Actor **)(*((_DWORD *)this + 0xF) + 4); /*0x67c737*/
      if ( v6 ) /*0x67c73f*/
      {
        if ( !((unsigned __int8 (__thiscall *)(LowProcess *))a2->members.super.process->Unk_7F)(a2->members.super.process) /*0x67c792*/
          && flt_B36778[0x62] > (double)(v5 % 0x64)
          && *(this + 0x14) <= 0.0 )
        {
          v7 = TESTopic::GetTopic(6, 2);        // Hardcoded miscellaneous topic bucket 6 index 2: stock 0000011A / ObserveCombat. This timer/chance ambient SayTopic path is separate from the HELLO conversation-package chain. /*0x67c798*/
          if ( v7 ) /*0x67c7a2*/
          {
            process = a2->members.super.process; /*0x67c7a4*/
            a2->members.unk0E4 = v6; /*0x67c7ad*/
            process->SayTopic(process, a2, (TESTopic *)v7, 0, 0, 1); /*0x67c7bd*/
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B36778[0x6A]); /*0x67c7c4*/
            v10 = *((_DWORD *)this + 0xF); /*0x67c7cb*/
            *(this + 0x14) = *(float *)SafeFloatPointer; /*0x67c7ce*/
            *(float *)(v10 + 0x20) = flt_A31C80; /*0x67c7d7*/
          }
        }
        *(this + 0x14) = *(this + 0x14) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x67c7e4*/
      }
    }
    else
    {
      *(float *)(v4 + 0x20) = *(float *)(v4 + 0x20) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x67c723*/
    }
  }
  else
  {
    ((void (__thiscall *)(LowProcess *, _DWORD))a2->members.super.process->Unk_80)(a2->members.super.process, 0); /*0x67c6fb*/
    sub_5E05F0(a2, 0x30); /*0x67c701*/
  }
}
