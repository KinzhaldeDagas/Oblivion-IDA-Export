void __thiscall sub_67C6E0(float *this, Actor *a2, char a3)
{
  int v4; // ecx
  int RandomLargeInteger; // ebp
  Actor *v6; // ebx
  int v7; // eax
  LowProcess *process; // ecx
  int *SafeFloatPointer; // eax
  int v10; // ecx

  if ( a3 )
  {
    v4 = *((_DWORD *)this + 0xF);
    if ( *(float *)(v4 + 0x20) <= 0.0 )
    {
      RandomLargeInteger = GetRandomLargeInteger_(0);
      v6 = *(Actor **)(*((_DWORD *)this + 0xF) + 4);
      if ( v6 )
      {
        if ( !((unsigned __int8 (__thiscall *)(LowProcess *))a2->members.super.process->Unk_7F)(a2->members.super.process)
          && fAISocialchanceForConversation > (double)(RandomLargeInteger % 0x64)
          && *(this + 0x14) <= 0.0 )
        {
          v7 = TESTopic::GEtTopic(6, 2);
          if ( v7 )
          {
            process = a2->members.super.process;
            a2->members.unk0E4 = v6;
            process->SayTopic(process, a2, (TESTopic *)v7, 0, 0, 1);
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B36920);
            v10 = *((_DWORD *)this + 0xF);
            *(this + 0x14) = *(float *)SafeFloatPointer;
            *(float *)(v10 + 0x20) = flt_A31C80;
          }
        }
        *(this + 0x14) = *(this + 0x14) - flt_B33E9C;
      }
    }
    else
    {
      *(float *)(v4 + 0x20) = *(float *)(v4 + 0x20) - flt_B33E9C;
    }
  }
  else
  {
    ((void (__thiscall *)(LowProcess *, _DWORD))a2->members.super.process->Unk_80)(a2->members.super.process, 0);
    sub_5E05F0(a2, 0x30);
  }
}
