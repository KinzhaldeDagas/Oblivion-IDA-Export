void __thiscall Actor::InitDialogue(
        Actor *this,
        char *a2,
        int **a3,
        int a4,
        int a5,
        signed int a6,
        char a7,
        char a8,
        bool DoAsync,
        char a10)
{
  HighProcess *process; // ecx
  void (__thiscall *Unk_97)(BaseProcess *__hidden); // edx
  unsigned int *v13; // ebp
  int *v14; // eax
  char v15; // cl
  UInt32 v16; // edi
  double v17; // st7
  void (__thiscall **v18)(UInt32, _DWORD); // ebp
  UInt32 v19; // eax
  void (__thiscall **v20)(UInt32, _DWORD, int); // ebp
  signed int v21; // eax
  double v22; // st7
  HighProcess *v23; // ecx
  int *sound; // edi
  int *v25; // eax
  float *v26; // eax
  _DWORD *v27; // eax
  int *v28; // eax
  float v29; // [esp+24h] [ebp-24Ch]
  float v30; // [esp+28h] [ebp-248h]
  signed int v31; // [esp+2Ch] [ebp-244h]
  signed int v32; // [esp+30h] [ebp-240h]
  char v33; // [esp+41h] [ebp-22Fh]
  bool v34; // [esp+42h] [ebp-22Eh]
  unsigned int *v35; // [esp+44h] [ebp-22Ch]
  float v36; // [esp+44h] [ebp-22Ch]
  int v37; // [esp+4Ch] [ebp-224h]
  float v38; // [esp+4Ch] [ebp-224h]
  int v39; // [esp+4Ch] [ebp-224h]
  float v40; // [esp+4Ch] [ebp-224h]
  float v41; // [esp+50h] [ebp-220h]
  float v42; // [esp+54h] [ebp-21Ch]
  BSStringT v43; // [esp+58h] [ebp-218h] BYREF
  int v44[128]; // [esp+60h] [ebp-210h] BYREF
  unsigned int v45; // [esp+26Ch] [ebp-4h]

  v43.m_data = 0;
  v43.m_dataLen = 0;
  v43.m_bufLen = 0;
  BSStringT_Set(&v43, a2, 0);                   // a2 contian the formed path for sound file
  process = (HighProcess *)this->members.super.process;
  Unk_97 = process->Unk_97;
  v45 = 0;
  v13 = (unsigned int *)((int (__thiscall *)(HighProcess *))Unk_97)(process);
  v35 = v13;
  if ( !a2 )
    goto LABEL_60;
  v14 = v44;
  do
  {
    v15 = *((_BYTE *)v14 + a2 - (char *)v44);
    *(_BYTE *)v14 = v15;
    v14 = (int *)((char *)v14 + 1);
  }
  while ( v15 );
  if ( !this->vtbl->super.super.GetNiNode(this) )
    goto LABEL_60;
  sub_5EF930(this);
  *(float *)&v37 = 0.0;
  v34 = this == (Actor *)TESDataHandler_g_PlayerRef;
  if ( this == (Actor *)TESDataHandler_g_PlayerRef )
    v33 = 1;
  else
    v33 = a8;
  if ( (double)dword_B36798 > TesObjectREF_GetDistance(
                                (TESObjectREFR *)this,
                                (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                                0)
    && (!v34 || TESDataHandler_g_PlayerRef->isThirdPerson) )
  {
    v16 = sub_5E12B0(this);
    if ( v16 )
    {
      if ( !v13 )
      {
        if ( !a10
          || ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_96)(this->members.super.process) )
        {
          v19 = sub_5E12B0(this);
          if ( v19 )
            (*(void (__thiscall **)(UInt32, const char *))(*(_DWORD *)v19 + 0xD8))(v19, "BigAah 0.9 0.2 0.1 0.2");
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_96)(this->members.super.process) )
            ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->Unk_95)(
              this->members.super.process,
              0);
          goto LABEL_23;
        }
        if ( !CosntructLipSyncPath(&v43) )
          goto LABEL_23;
        if ( DoAsync && bBackgroundLoadLipFiles )
        {
          ((void (__thiscall *)(LowProcess *, int))this->members.super.process->Unk_94)(this->members.super.process, 1);
          sub_642A70((Actor *)&unk_B3BD7C, this, v43.m_data);
          v45 = 0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&v43);
          return;
        }
        v13 = sub_494150(0, v16, (const char **)&v43.m_data, v31, v32);
        v35 = v13;
        ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->Unk_94)(this->members.super.process, 0);
        if ( !v13 )
          goto LABEL_23;
      }
      v17 = (double)(int)*v13;
      if ( (int)*v13 < 0 )
        v17 = v17 + flt_A2FC78;
      *(float *)&v37 = v17 / dbl_A3AA50;
      sub_493D50(v13, v16, flt_A3D9A4);
LABEL_23:
      if ( byte_B1206C )
      {
        if ( a4 )
        {
          v21 = sub_54F590(a4);
          v22 = (double)a5;
          if ( a5 < 0 )
            v22 = v22 + flt_A2FC78;
          v36 = v22 / fCostant_100;
          (*(void (__thiscall **)(UInt32, signed int, _DWORD))(*(_DWORD *)v16 + 0xC8))(v16, v21, LODWORD(v36));
        }
        else if ( this->members.super.process && sub_5E6C10((MobileObject *)this) )
        {
          v18 = (void (__thiscall **)(UInt32, _DWORD))(*(_DWORD *)v16 + 0xD0);
          v30 = ((double (__thiscall *)(LowProcess *, Actor *, PlayerCharacter *, int))this->members.super.process->Unk_75)(
                  this->members.super.process,
                  this,
                  TESDataHandler_g_PlayerRef,
                  1);
          (*v18)(v16, LODWORD(v30));
          v13 = v35;
        }
        else
        {
          v20 = (void (__thiscall **)(UInt32, _DWORD, int))(*(_DWORD *)v16 + 0xD0);
          v29 = sub_5E0DD0((int **)this);
          (*v20)(v16, LODWORD(v29), 1);
          v13 = v35;
        }
      }
      else
      {
        (*(void (__thiscall **)(UInt32, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v16 + 0x78))(
          v16,
          0.0,
          1,
          0,
          0,
          0,
          0);
      }
      if ( a7 )
      {
        v23 = (HighProcess *)this->members.super.process;
        if ( v23 )
          ((void (__thiscall *)(HighProcess *, int))v23->Unk_77)(v23, a4);
      }
    }
  }
  sound = (int *)OSGlobals->sound;
  if ( sound )
  {
    if ( v33 )
      v25 = sub_6AE370(sound, (const char *)v44, 5, 0, v37);
    else
      v25 = sub_6AE370(sound, (const char *)v44, 6, 0, v37);
    *a3 = v25;
    if ( v25 )
    {
      if ( v33 )
      {
        v39 = (int)(*(float *)GameSetting_GetSafeFloatPointer(&dword_B161E0) * fCostant_100);
        sub_6B72B0(*a3, (unsigned __int16)v39);
      }
      else
      {
        v26 = this->vtbl->super.super.GetPos(this);
        v42 = v26[2];
        v38 = *v26;
        v41 = v26[1];
        sub_6ACC50(sound, **a3, flt_B161C8, flt_B161D0);
        sub_6B7360(*a3, v38, v41, v42);
        sub_6AC3E0((_DWORD **)sound, **a3, (LONG)this);
      }
      if ( v13 )
      {
        v40 = (sub_493BA0((int *)v13) + flt_B39AC8) * dbl_A2FC70;
        sub_6B71F0(*a3, (__int64)v40, 0);
        sub_493BA0((int *)v13);
        if ( (unsigned __int16)sub_6B7340(*a3) )
          sub_6B7340(*a3);
      }
      else
      {
        sub_6B71F0(*a3, 1, 0);
        GameSetting_GetSafeFloatPointer((int *)&unk_B36AF0);
      }
      ((void (__thiscall *)(LowProcess *, _DWORD, _DWORD))this->members.super.process->SetUnk220Element)(
        this->members.super.process,
        0,
        *a3);
    }
    else
    {
      v27 = (_DWORD *)FormHeapAlloc(4u);
      LOBYTE(v45) = 1;
      if ( v27 )
        v28 = unknown_libname_1(v27, 0xFFFFFF9C);
      else
        v28 = 0;
      LOBYTE(v45) = 0;
      *a3 = v28;
      GameSetting_GetSafeFloatPointer((int *)&unk_B36AF0);
    }
  }
  if ( v13 )
  {
    sub_493B70((unsigned int **)v13);
    FormHeapFree((unsigned int)v13);
    ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->Unk_98)(this->members.super.process, 0);
    ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->Unk_94)(this->members.super.process, 0);
  }
LABEL_60:
  FormHeapFree((unsigned int)v43.m_data);
}
