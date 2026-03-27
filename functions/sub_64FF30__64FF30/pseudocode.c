void __userpurge sub_64FF30(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, Actor *a5)
{
  int v6; // esi
  Actor *Levels; // ebx
  TESPackage *v8; // esi
  int v9; // [esp+10h] [ebp-4h]

  v6 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x184))(a1, a4, a3);
  v9 = sub_779480((_DWORD *)v6);
  Levels = (Actor *)NiDX9TextureData::GetLevels((NiDX9TextureData *)v6);
  if ( a5 == Levels )
    Levels = (Actor *)v9;
  if ( *(float *)(v6 + 0x44) <= 0.0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0xC0))(a1) )
    {
      a5->vtbl->Unk_C3(a5);
      v8 = sub_5E0380(Levels);
      if ( v8 == sub_5E0380(a5) )
        Levels->vtbl->Unk_C3(Levels);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0xBC))(a1, 0);
    }
    else
    {
      sub_6267A0(v6, a2, a3, 0.0, 0);
    }
  }
  else
  {
    *(float *)(v6 + 0x44) = *(float *)(v6 + 0x44) - flt_B33E9C;
  }
}
