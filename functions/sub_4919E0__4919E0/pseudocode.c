void __userpurge sub_4919E0(
        int ***this@<ecx>,
        double st5_0@<st2>,
        double st7_0@<st0>,
        double st6_0@<st1>,
        TESObjectREFR *a5,
        TESForm *a6,
        BSExtraDataVtbl *a7)
{
  int **v7; // esi
  bool v8; // zf
  int *v9; // edi
  int *v10; // ebp
  _DWORD *v11; // eax
  TESForm *v12; // ebp
  ExtraDataList *v13; // edi
  TESObjectREFR *Owner; // eax
  _DWORD *v15; // eax
  unsigned int v16; // ecx
  int ExtraCount; // esi
  const char *v18; // eax
  const char *NameForForm; // eax
  CHAR *v20; // eax
  const char *ItemUpDownSound; // eax
  char *m_data; // esi
  signed __int16 v23; // ax
  int ***v24; // edi
  unsigned __int8 *v25; // [esp-10h] [ebp-16Ch]
  TESForm *v26; // [esp-8h] [ebp-164h]
  const char *v27; // [esp+4h] [ebp-158h]
  const char *v28; // [esp+8h] [ebp-154h]
  char v29; // [esp+22h] [ebp-13Ah]
  char v30; // [esp+23h] [ebp-139h]
  _DWORD *v31; // [esp+24h] [ebp-138h]
  BSStringT v33; // [esp+2Ch] [ebp-130h] BYREF
  int *v34; // [esp+34h] [ebp-128h]
  TESObjectREFR *v35; // [esp+38h] [ebp-124h]
  int **v36; // [esp+3Ch] [ebp-120h]
  TESForm *v37; // [esp+40h] [ebp-11Ch]
  _DWORD *v38; // [esp+44h] [ebp-118h]
  char v39[260]; // [esp+48h] [ebp-114h] BYREF
  unsigned int v40; // [esp+158h] [ebp-4h]

  v7 = *this;
  v8 = *this == 0;
  v35 = a5;
  v37 = a6;
  if ( !v8 )
  {
    do
    {
      v36 = (int **)v7[1];
      v9 = (int *)v36;
      if ( !v36 && !*v7 )
        return;
      v10 = *v7;
      v8 = *v7 == 0;
      v34 = *v7;
      v29 = 0;
      if ( v8 || v10[1] <= 0 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10[2] + 0x78))(v10[2]) )
      {
        if ( v9 == v7[1] )
          goto LABEL_43;
        v7 = *this;
      }
      else
      {
        v11 = (_DWORD *)*v10;
        v8 = *v10 == 0;
        v12 = (TESForm *)v10[2];
        v31 = v11;
        if ( !v8 && *v11 )
        {
          while ( 1 )
          {
            v13 = (ExtraDataList *)*v11;
            if ( !*v11 )
              goto LABEL_44;
            v38 = (_DWORD *)v11[1];
            v30 = 0;
            if ( a7 )
            {
              if ( a7 != ExtraDataList_GetOwner(v13) )
                break;
            }
            if ( !ExtraDataList_GetOwner(v13) )
              break;
            Owner = (TESObjectREFR *)ExtraDataList_GetOwner(v13);
            if ( Owner == v35 )
              break;
            v15 = (_DWORD *)*v34;
            v16 = 0;
            if ( !*v34 )
              goto LABEL_19;
            do
            {
              if ( *v15 )
                ++v16;
              v15 = (_DWORD *)v15[1];
            }
            while ( v15 );
            if ( v16 > 1 )
              v30 = 1;
            else
LABEL_19:
              v29 = 1;
            if ( a7 )
            {
              v33.m_data = 0;
              v33.m_dataLen = 0;
              v33.m_bufLen = 0;
              v40 = 0;
              ExtraCount = ExtraDataList_GetExtraCount(v13);
              v28 = (const char *)dword_B382B0;
              if ( ExtraCount <= 1 )
              {
                NameForForm = TESFullName_GetNameForForm(v12);
                BSStringT_Static_Format(&v33, "%s %s", NameForForm, v28);
              }
              else
              {
                v27 = (const char *)sPlural;
                v18 = TESFullName_GetNameForForm(v12);
                BSStringT_Static_Format(&v33, "%i %s%s %s", ExtraCount, v18, v27, v28);
              }
              v20 = sub_4702D0(v12, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
              _sprintf(v39, "%s\\%s", "Icons", v20);
              ItemUpDownSound = GetItemUpDownSound(v12, 0, 0);
              st7_0 = fConstant_2;
              m_data = v33.m_data;
              QueueUIMessage((char)v12, st5_0, st7_0, (int)v33.m_data, fConstant_2, (int)v39, (int)ItemUpDownSound);
              v40 = 0xFFFFFFFF;
              FormHeapFree((unsigned int)m_data);
              v33.m_data = 0;
              v33.m_bufLen = 0;
              v33.m_dataLen = 0;
            }
            v26 = v37;
            v25 = (unsigned __int8 *)v13;
            v23 = ExtraDataList_GetExtraCount(v13);
            v24 = this;
            ContainerExtraData_RemoveForm(this, st5_0, st7_0, st6_0, v35, (int)v12, 0, v23, v25, 0, v26, 0, 0, 1, 0);
            v7 = *this;
            if ( v29 )
              goto LABEL_44;
            if ( v30 )
            {
              v11 = (_DWORD *)*v34;
              v31 = (_DWORD *)*v34;
              if ( !*v34 )
                goto LABEL_44;
            }
            else
            {
LABEL_31:
              if ( v38 == (_DWORD *)v31[1] )
                v31 = v38;
              else
                v31 = (_DWORD *)*v34;
              if ( !v31 )
              {
                if ( v36 == (int **)v7[1] )
                  v7 = v36;
                else
                  v7 = *v24;
                goto LABEL_44;
              }
              v11 = v31;
            }
          }
          v24 = this;
          goto LABEL_31;
        }
        if ( v9 == v7[1] )
        {
LABEL_43:
          v7 = (int **)v9;
          continue;
        }
        v7 = *this;
      }
LABEL_44:
      ;
    }
    while ( v7 );
  }
}
