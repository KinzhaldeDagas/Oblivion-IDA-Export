TESChildCELL *__userpurge sub_4B86C0@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        _BYTE *a6)
{
  TESChildCELL *v7; // ebp
  TESObjectCELL *ParentCell; // eax
  unsigned __int8 *v9; // edi
  _BYTE *v10; // eax
  _BYTE *v11; // esi
  ExtraTeleport *TeleportExtraData; // eax
  ExtraTeleport *v13; // eax
  BSExtraDataVtbl *v14; // eax
  unsigned __int8 *v15; // eax
  int v16; // edx
  unsigned int v17; // esi
  _DWORD *v18; // eax
  unsigned __int8 **v19; // eax
  unsigned __int8 *v20; // ecx
  int v21; // eax
  PlayerCharacter *v22; // ecx
  int v23; // edi
  unsigned int i; // edx
  int v25; // eax
  int *v26; // esi
  unsigned __int8 **v27; // eax
  unsigned __int8 *v28; // edx
  int v29; // esi
  unsigned __int8 *v30; // ecx
  TESChildCELL *v31; // eax
  int v32; // eax
  TESObjectCELL *v33; // eax
  int v34; // esi
  TESChildCELL *v36; // [esp+14h] [ebp-40h] BYREF
  int v37; // [esp+18h] [ebp-3Ch]
  unsigned int v38; // [esp+1Ch] [ebp-38h]
  unsigned int v39; // [esp+20h] [ebp-34h]
  int v40; // [esp+24h] [ebp-30h]
  unsigned int v41[4]; // [esp+28h] [ebp-2Ch] BYREF
  unsigned int v42[4]; // [esp+38h] [ebp-1Ch] BYREF
  unsigned int v43; // [esp+50h] [ebp-4h]
  unsigned __int8 *WorldSpace; // [esp+58h] [ebp+4h]
  unsigned int v45; // [esp+5Ch] [ebp+8h]

  v37 = a1;
  v7 = 0;
  v36 = 0;
  if ( a5 )
  {
    WorldSpace = (unsigned __int8 *)TESObjectREFR_GetWorldSpace(a5);
    if ( !WorldSpace )
    {
      if ( TESObjectREFR_GetParentCell(a5) )
      {
        ParentCell = TESObjectREFR_GetParentCell(a5);
        if ( TESObjectCELL_IsInterior(ParentCell) )
          WorldSpace = (unsigned __int8 *)TESObjectREFR_GetParentCell(a5);
      }
    }
    v9 = 0;
    if ( a6 )
    {
      v10 = (_BYTE *)sub_4D8E40(a6);
      v11 = v10;
      if ( v10 )
      {
        if ( GetTeleportExtraData(v10) )
        {
          TeleportExtraData = GetTeleportExtraData(v11);
          if ( sub_42B410(&TeleportExtraData->super) )
          {
            v13 = GetTeleportExtraData(v11);
            v14 = sub_42B410(&v13->super);
            sub_4D8AF0(v14);
            v9 = v15;
          }
        }
      }
    }
    if ( WorldSpace )
    {
      NiTPointerMap<int,bool>::NiTPointerMap<int,bool>((NiTPointerMap<int,bool> *)v41, 0x25u);
      v16 = v37;
      v17 = 0;
      v18 = (_DWORD *)(v37 + 0x68);
      v43 = 0;
      v45 = 0;
      v38 = 0;
      if ( v37 != 0xFFFFFF98 )
      {
        do
        {
          if ( *v18 )
            ++v17;
          v18 = (_DWORD *)v18[1];
        }
        while ( v18 );
        v38 = v17;
      }
      if ( v9 )
      {
        if ( v9 != WorldSpace )
        {
          v19 = (unsigned __int8 **)(v37 + 0x68);
          if ( v37 != 0xFFFFFF98 )
          {
            do
            {
              v20 = v19[1];
              if ( !v20 && !*v19 )
                break;
              if ( *v19 == v9 )
              {
                v45 = v17;
                v21 = sub_4CB070(v9, WorldSpace, &v36);
                v16 = v37;
                v7 = (TESChildCELL *)v21;
                v36 = 0;
                break;
              }
              v19 = (unsigned __int8 **)v19[1];
            }
            while ( v20 );
          }
        }
      }
      v22 = TESDataHandler_g_PlayerRef;
      v23 = 0xFFFFFFFF;
      v39 = 0xFFFFFFFF;
      v40 = sub_663EB0(v22, v16);
      if ( v45 >= v17 )
      {
LABEL_50:
        if ( !v7 )
        {
          if ( v36 )
          {
            if ( (*(_BYTE *)(v37 + 0x64) & 1) != 0 )
            {
              RemoveExtraTeleportFromDoorRef(v36);
              v32 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v36);
              if ( v32 )
              {
                sub_4F2630(v32, a2, a3, a4);
              }
              else
              {
                v33 = TESObjectREFR_GetParentCell((TESObjectREFR *)v36);
                v34 = (int)v33;
                if ( v33 )
                {
                  if ( TESObjectCELL_IsInterior(v33) )
                  {
                    sub_4B8420(v42, 0x25u);
                    LOBYTE(v43) = 1;
                    sub_4CBE50(v34, a2, a3, a4, v42);
                    NiTMap_Clear(v42);
                    LOBYTE(v43) = 0;
                    NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(v42);
                  }
                }
              }
              v7 = v36;
              v23 = v39;
            }
          }
        }
      }
      else
      {
        while ( !v7 )
        {
          ++v45;
          for ( i = GetRandomLargeInteger_(0) % v17; ; i = GetRandomLargeInteger_(0) % v38 )
          {
            v23 = i;
            v25 = (*(int (__thiscall **)(unsigned int *, unsigned int))(v41[0] + 4))(v41, i);
            v26 = *(int **)(v41[2] + 4 * v25);
            if ( !v26 )
              break;
            while ( !(*(unsigned __int8 (__thiscall **)(unsigned int *, int, int))(v41[0] + 8))(v41, v23, v26[1]) )
            {
              v26 = (int *)*v26;
              if ( !v26 )
                goto LABEL_34;
            }
            if ( !*((_BYTE *)v26 + 8) )
              break;
          }
LABEL_34:
          v27 = (unsigned __int8 **)(v37 + 0x68);
          v28 = 0;
          v29 = 0;
          if ( v37 != 0xFFFFFF98 )
          {
            do
            {
              v30 = v27[1];
              if ( !v30 && !*v27 )
                break;
              if ( v29 == v23 )
              {
                v28 = *v27;
                break;
              }
              v27 = (unsigned __int8 **)v27[1];
              ++v29;
            }
            while ( v30 );
          }
          v31 = (TESChildCELL *)sub_4CB070(v28, WorldSpace, &v36);
          v7 = v31;
          if ( v36 )
          {
            if ( v39 == 0xFFFFFFFF )
              v39 = v23;
          }
          if ( v31 )
          {
            if ( v23 == v40 )
            {
              v36 = v31;
              v39 = v23;
              v7 = 0;
            }
          }
          NiTMap_SetAt(v41, v29, 1);
          if ( v45 >= v38 )
            goto LABEL_50;
          v17 = v38;
        }
      }
      if ( v23 != 0xFFFFFFFF )
        sub_663EE0(TESDataHandler_g_PlayerRef, v37, v23);
      v43 = 0xFFFFFFFF;
      NiTPointerMap<int,bool>::~NiTPointerMap<int,bool>(v41);
    }
  }
  return v7;
}
