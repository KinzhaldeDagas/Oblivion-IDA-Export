char __thiscall sub_537020(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ecx
  int v4; // ebp
  int v5; // eax
  _DWORD *v6; // esi
  int (__thiscall *v7)(_DWORD *); // edx
  void (__thiscall *v8)(_DWORD *, int *); // edx
  int v9; // esi
  int v10; // ebp
  PlayerCharacter *v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  char v16; // al
  char v17; // bl
  char v18; // al
  PlayerCharacter *v19; // ecx
  char v20; // al
  bool v21; // zf
  int v22; // ecx
  int v24; // ebx
  int v25; // ecx
  int v26; // edi
  PlayerCharacter *v27; // eax
  int v28; // ecx
  PlayerCharacter *v29; // esi
  int v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  char v33; // al
  int v34; // ecx
  char v35; // [esp+16h] [ebp-142h]
  char v36; // [esp+17h] [ebp-141h]
  _DWORD *v37; // [esp+18h] [ebp-140h] BYREF
  int v38; // [esp+1Ch] [ebp-13Ch]
  int v39; // [esp+20h] [ebp-138h]
  _DWORD *v40; // [esp+24h] [ebp-134h]
  _DWORD *v41; // [esp+28h] [ebp-130h]
  int v42; // [esp+2Ch] [ebp-12Ch]
  int v43; // [esp+30h] [ebp-128h]
  int v44; // [esp+38h] [ebp-120h] BYREF
  int v45; // [esp+3Ch] [ebp-11Ch]
  int v46; // [esp+40h] [ebp-118h]
  int v47; // [esp+44h] [ebp-114h]
  int v48; // [esp+154h] [ebp-4h]

  v2 = this;
  v40 = this;
  v3 = (_DWORD *)*(this + 3);
  v4 = 0;
  v35 = 0;
  if ( !v3 )
    return 0;
  v5 = v3[2];
  if ( (v5 & 0x800) != 0 || (v5 & 0x20) != 0 || !(*(int (__thiscall **)(_DWORD *))(*v3 + 0x154))(v3) )
    return 0;
  v6 = (_DWORD *)(v2[2] + *(_DWORD *)(v2[2] + 0x10));
  v7 = *(int (__thiscall **)(_DWORD *))(*v6 + 0x10);
  v41 = v6;
  if ( v7(v6) != 1 )
  {
    if ( !(*(int (__thiscall **)(_DWORD *))(*v6 + 0x10))(v6) )
    {
      v24 = v6[0x25];
      if ( v24 )
      {
        v37 = 0;
        v38 = 0;
        v39 = 0x80000000;
        v48 = 2;
        if ( v24 > 0 )
        {
          sub_8A6E40((const void **)&v37, v24 < 0 ? 0 : v24, 4);
          while ( 1 )
          {
            v25 = v6[0x24];
            v26 = *(_DWORD *)(v25 + 4 * v4);
            if ( v26 )
            {
              v27 = sub_536110(*(_DWORD *)(v25 + 4 * v4));
              v28 = v38;
              v29 = v27;
              v30 = 0;
              if ( v38 <= 0 )
                goto LABEL_49;
              while ( (PlayerCharacter *)v37[v30] != v29 )
              {
                if ( ++v30 >= v38 )
                  goto LABEL_49;
              }
              if ( v30 == 0xFFFFFFFF )
              {
LABEL_49:
                if ( v38 == (v39 & 0x3FFFFFFF) )
                {
                  sub_8A6EE0((int)&v37, 4);
                  v28 = v38;
                }
                v31 = v40;
                v37[v28] = v29;
                v32 = v31[3];
                ++v38;
                Script_AddEventToExtraScript(v29, v32 + 0x44, 0x10000000);
                if ( v33 )
                  v35 = 1;
                else
                  (*(void (__thiscall **)(_DWORD *, int))(*v41 + 0x20))(v41, v26);
              }
            }
            if ( ++v4 >= v24 )
              break;
            v6 = v41;
          }
        }
        v48 = 0xFFFFFFFF;
        if ( v39 >= 0 )
        {
          v34 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v34 )
            v34 = dword_BA7D9C;
          sub_8A75D0(v34, v37, 4 * v39, 0x14);
        }
      }
    }
    return v35;
  }
  if ( !v6[0x49] )
    return v35;
  sub_536F70(&v44);
  v8 = *(void (__thiscall **)(_DWORD *, int *))(*v6 + 0x38);
  v48 = 0;
  v47 = 0;
  LOBYTE(v45) = 0;
  v8(v6, &v44);
  if ( v47 )
  {
    v9 = v47;
    v37 = 0;
    v38 = 0;
    v39 = 0x80000000;
    LOBYTE(v48) = 1;
    if ( v47 > 0 )
      sub_8A6E40((const void **)&v37, v47 < 0 ? 0 : v47, 4);
    v36 = 0;
    if ( v9 > 0 )
    {
      v42 = 0;
      v43 = v9;
      while ( 1 )
      {
        v10 = *(_DWORD *)(v46 + v4 + 8);
        if ( v10 )
        {
          v11 = sub_536110(v10);
          if ( v11 )
          {
            v12 = v38;
            v13 = 0;
            if ( v38 <= 0 )
              goto LABEL_20;
            while ( (PlayerCharacter *)v37[v13] != v11 )
            {
              if ( ++v13 >= v38 )
                goto LABEL_20;
            }
            if ( v13 == 0xFFFFFFFF )
            {
LABEL_20:
              if ( v38 == (v39 & 0x3FFFFFFF) )
              {
                sub_8A6EE0((int)&v37, 4);
                v12 = v38;
              }
              v37[v12] = v11;
              v14 = v2[3];
              ++v38;
              v15 = v14 + 0x44;
              Script_AddEventToExtraScript(v11, v14 + 0x44, 0x10000000);
              v17 = v16;
              if ( (v11->vtbl->super.super.super.IsMobileObject((TESObjectREFR *)v11) ? (unsigned int)v11 : 0) != 0 )
              {
                Script_AddEventToExtraScript(v11, v15, 0x40000000);
                v17 |= v18;
                v19 = v11->vtbl->super.super.super.IsActor((TESObjectREFR *)v11) ? v11 : 0;
                if ( v19 )
                {
                  if ( !v19->vtbl->super.super.super.IsDead((TESObjectREFR *)v19, 0) )
                  {
                    Script_AddEventToExtraScript(v11, v15, 0x20000000);
                    v17 |= v20;
                  }
                }
              }
              if ( !v36 )
              {
                sub_4D8350(v40[3], (int)v11);
                v36 = 1;
              }
              if ( v17 )
              {
                v35 = 1;
              }
              else if ( (SaveLoad_CurrentSavegame->flags & 0x800) == 0 )
              {
                (*(void (__thiscall **)(_DWORD *, int))(*v41 + 0x20))(v41, v10);
              }
            }
          }
        }
        v4 = v42 + 0x10;
        v21 = v43-- == 1;
        v42 += 0x10;
        if ( v21 )
          break;
        v2 = v40;
      }
    }
    LOBYTE(v48) = 0;
    if ( v39 >= 0 )
    {
      v22 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v22 )
        v22 = dword_BA7D9C;
      sub_8A75D0(v22, v37, 4 * v39, 0x14);
    }
  }
  v48 = 0xFFFFFFFF;
  hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector((hkAllCdBodyPairCollector *)&v44);
  return v35;
}
