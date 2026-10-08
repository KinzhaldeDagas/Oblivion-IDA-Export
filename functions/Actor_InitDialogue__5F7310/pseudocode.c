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

  v43.m_data = 0; /*0x5f7369*/
  v43.m_dataLen = 0; /*0x5f736d*/
  v43.m_bufLen = 0; /*0x5f7372*/
  BSStringT_Set(&v43, a2, 0);                   // a2 contian the formed path for sound file /*0x5f7377*/
  process = (HighProcess *)this->members.super.process; /*0x5f737c*/
  Unk_97 = process->Unk_97; /*0x5f7381*/
  v45 = 0; /*0x5f7387*/
  v13 = (unsigned int *)((int (__thiscall *)(HighProcess *))Unk_97)(process); /*0x5f7392*/
  v35 = v13; /*0x5f7394*/
  if ( !a2 ) /*0x5f7398*/
    goto LABEL_60; /*0x5f7398*/
  v14 = v44; /*0x5f73a4*/
  do /*0x5f73ba*/
  {
    v15 = *((_BYTE *)v14 + a2 - (char *)v44); /*0x5f73b0*/
    *(_BYTE *)v14 = v15; /*0x5f73b3*/
    v14 = (int *)((char *)v14 + 1); /*0x5f73b5*/
  }
  while ( v15 ); /*0x5f73ba*/
  if ( !this->vtbl->super.super.GetNiNode(this) ) /*0x5f73c6*/
    goto LABEL_60; /*0x5f73ca*/
  Actor::StopDialoguePlayback(this); /*0x5f73d2*/
  *(float *)&v37 = 0.0; /*0x5f73df*/
  v34 = this == (Actor *)reference; /*0x5f73ea*/
  if ( this == (Actor *)reference ) /*0x5f73ee*/
    v33 = 1; /*0x5f73f0*/
  else
    v33 = a8; /*0x5f73fe*/
  if ( (double)SLODWORD(flt_B36778[8]) > TesObjectREF_GetDistance((TESObjectREFR *)this, (TESObjectREFR *)reference, 0) /*0x5f742b*/
    && (!v34 || reference->isThirdPerson) )
  {
    v16 = sub_5E12B0(this); /*0x5f743f*/
    if ( v16 ) /*0x5f7443*/
    {
      if ( !v13 ) /*0x5f744b*/
      {
        if ( !a10 /*0x5f746a*/
          || ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_96)(this->members.super.process) )
        {
          v19 = sub_5E12B0(this); /*0x5f758a*/
          if ( v19 ) /*0x5f7591*/
            (*(void (__thiscall **)(UInt32, const char *))(*(_DWORD *)v19 + 0xD8))(v19, "BigAah 0.9 0.2 0.1 0.2"); /*0x5f75a2*/
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_96)(this->members.super.process) ) /*0x5f75af*/
            ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->Unk_95)( /*0x5f75c6*/
              this->members.super.process,
              0);
          goto LABEL_23; /*0x5f75c8*/
        }
        if ( !CosntructLipSyncPath(&v43) ) /*0x5f7479*/
          goto LABEL_23; /*0x5f7479*/
        if ( DoAsync && bBackgroundLoadLipFiles ) /*0x5f7493*/
        {
          ((void (__thiscall *)(LowProcess *, int))this->members.super.process->Unk_94)(this->members.super.process, 1); /*0x5f74a9*/
          sub_642A70((Actor *)&qword_B3BB2C[0x94], this, v43.m_data); /*0x5f74b6*/
          v45 = 0xFFFFFFFF; /*0x5f74bf*/
          BSStringT_Clear((unsigned int *)&v43); /*0x5f74ca*/
          return; /*0x5f74cf*/
        }
        v13 = sub_494150(0, v16, (const char **)&v43.m_data, v31, v32); /*0x5f74e1*/
        v35 = v13; /*0x5f74f0*/
        ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->Unk_94)(this->members.super.process, 0); /*0x5f74f4*/
        if ( !v13 ) /*0x5f74f8*/
          goto LABEL_23; /*0x5f74f8*/
      }
      v17 = (double)(int)*v13; /*0x5f74fd*/
      if ( (int)*v13 < 0 ) /*0x5f7502*/
        v17 = v17 + flt_A2FC78; /*0x5f7504*/
      *(float *)&v37 = v17 / dbl_A3AA50; /*0x5f7513*/
      sub_493D50(v13, v16, flt_A3D9A4); /*0x5f7521*/
LABEL_23:
      if ( byte_B1206C ) /*0x5f7526*/
      {
        if ( a4 ) /*0x5f753c*/
        {
          v21 = sub_54F590(a4); /*0x5f75f0*/
          v22 = (double)a5; /*0x5f75f5*/
          if ( a5 < 0 ) /*0x5f7607*/
            v22 = v22 + flt_A2FC78; /*0x5f7609*/
          v36 = v22 / fCostant_100; /*0x5f761d*/
          (*(void (__thiscall **)(UInt32, signed int, _DWORD))(*(_DWORD *)v16 + 0xC8))(v16, v21, LODWORD(v36)); /*0x5f7629*/
        }
        else if ( this->members.super.process && sub_5E6C10((MobileObject *)this) ) /*0x5f754d*/
        {
          v18 = (void (__thiscall **)(UInt32, _DWORD))(*(_DWORD *)v16 + 0xD0); /*0x5f756c*/
          v30 = ((double (__thiscall *)(LowProcess *, Actor *, PlayerCharacter *, int))this->members.super.process->Unk_75)( /*0x5f757a*/
                  this->members.super.process,
                  this,
                  reference,
                  1);
          (*v18)(v16, LODWORD(v30)); /*0x5f757d*/
          v13 = v35; /*0x5f757f*/
        }
        else
        {
          v20 = (void (__thiscall **)(UInt32, _DWORD, int))(*(_DWORD *)v16 + 0xD0); /*0x5f75d3*/
          v29 = sub_5E0DD0((int **)this); /*0x5f75e4*/
          (*v20)(v16, LODWORD(v29), 1); /*0x5f75e7*/
          v13 = v35; /*0x5f75e9*/
        }
      }
      else
      {
        (*(void (__thiscall **)(UInt32, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v16 + 0x78))( /*0x5f7644*/
          v16,
          0.0,
          1,
          0,
          0,
          0,
          0);
      }
      if ( a7 ) /*0x5f764e*/
      {
        v23 = (HighProcess *)this->members.super.process; /*0x5f7650*/
        if ( v23 ) /*0x5f7655*/
          ((void (__thiscall *)(HighProcess *, int))v23->Unk_77)(v23, a4); /*0x5f7667*/
      }
    }
  }
  sound = (int *)MEMORY[0xB33398]->sound; /*0x5f7669*/
  if ( sound ) /*0x5f7674*/
  {
    if ( v33 ) /*0x5f768b*/
      v25 = sub_6AE370(sound, (char *)v44, 5, 0, v37); /*0x5f769d*/
    else
      v25 = sub_6AE370(sound, (char *)v44, 6, 0, v37); /*0x5f7694*/
    *a3 = v25; /*0x5f76a4*/
    if ( v25 ) /*0x5f76a6*/
    {
      if ( v33 ) /*0x5f76b1*/
      {
        v39 = (int)(*GameSetting_GetSafeFloatPointer((float *)&dword_B161E0) * fCostant_100); /*0x5f774d*/
        sub_6B72B0(*a3, (unsigned __int16)v39); /*0x5f775d*/
      }
      else
      {
        v26 = this->vtbl->super.super.GetPos(this); /*0x5f76bd*/
        v42 = v26[2]; /*0x5f76d4*/
        v38 = *v26; /*0x5f76e5*/
        v41 = v26[1]; /*0x5f76ec*/
        sub_6ACC50(sound, **a3, flt_B161C8, flt_B161D0); /*0x5f76f0*/
        sub_6B7360(*a3, v38, v41, v42); /*0x5f7711*/
        sub_6AC3E0((_DWORD **)sound, **a3, (LONG)this); /*0x5f771e*/
      }
      if ( v13 ) /*0x5f7764*/
      {
        v40 = (sub_493BA0((int *)v13) + unk_B39AC8) * dbl_A2FC70; /*0x5f778f*/
        sub_6B71F0(*a3, (__int64)v40, 0); /*0x5f77ac*/
        sub_493BA0((int *)v13); /*0x5f77b3*/
        if ( (unsigned __int16)sub_6B7340(*a3) ) /*0x5f77c4*/
          sub_6B7340(*a3); /*0x5f77d0*/
      }
      else
      {
        sub_6B71F0(*a3, 1, 0); /*0x5f77fe*/
        GameSetting_GetSafeFloatPointer(unk_B36AF0); /*0x5f7808*/
      }
      ((void (__thiscall *)(LowProcess *, _DWORD, _DWORD))this->members.super.process->SetUnk220Element)( /*0x5f782a*/
        this->members.super.process,
        0,
        *a3);
    }
    else
    {
      v27 = (_DWORD *)FormHeapAlloc(4u); /*0x5f7830*/
      LOBYTE(v45) = 1; /*0x5f783e*/
      if ( v27 ) /*0x5f7846*/
        v28 = unknown_libname_1(v27, 0xFFFFFF9C); /*0x5f784c*/
      else
        v28 = 0; /*0x5f7853*/
      LOBYTE(v45) = 0; /*0x5f785a*/
      *a3 = v28; /*0x5f7862*/
      GameSetting_GetSafeFloatPointer(unk_B36AF0); /*0x5f7864*/
    }
  }
  if ( v13 ) /*0x5f7878*/
  {
    sub_493B70((unsigned int **)v13); /*0x5f787c*/
    FormHeapFree((unsigned int)v13); /*0x5f7882*/
    ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->Unk_98)(this->members.super.process, 0); /*0x5f7897*/
    ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->Unk_94)(this->members.super.process, 0); /*0x5f78a6*/
  }
LABEL_60:
  FormHeapFree((unsigned int)v43.m_data); /*0x5f78bb*/
}
