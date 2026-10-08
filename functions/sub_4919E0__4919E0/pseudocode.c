void __userpurge sub_4919E0(
        int ***this@<ecx>,
        double st5_0@<st2>,
        double st7_0@<st0>,
        double st6_0@<st1>,
        TESForm *a5,
        TESForm *a6,
        TESForm *a7)
{
  int **v7; // esi
  bool v8; // zf
  int *v9; // edi
  int *v10; // ebp
  _DWORD *v11; // eax
  TESForm *v12; // ebp
  ExtraDataList *v13; // edi
  TESForm *Owner; // eax
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
  ExtraDataList *v25; // [esp-10h] [ebp-16Ch]
  TESForm *v26; // [esp-8h] [ebp-164h]
  float v27; // [esp+4h] [ebp-158h]
  const char *value; // [esp+8h] [ebp-154h]
  char v29; // [esp+22h] [ebp-13Ah]
  char v30; // [esp+23h] [ebp-139h]
  _DWORD *v31; // [esp+24h] [ebp-138h]
  BSStringT v33; // [esp+2Ch] [ebp-130h] BYREF
  int *v34; // [esp+34h] [ebp-128h]
  TESForm *v35; // [esp+38h] [ebp-124h]
  int **v36; // [esp+3Ch] [ebp-120h]
  TESForm *v37; // [esp+40h] [ebp-11Ch]
  _DWORD *v38; // [esp+44h] [ebp-118h]
  char v39[260]; // [esp+48h] [ebp-114h] BYREF
  unsigned int v40; // [esp+158h] [ebp-4h]

  v7 = *this; /*0x491a1b*/
  v8 = *this == 0; /*0x491a2d*/
  v35 = a5; /*0x491a33*/
  v37 = a6; /*0x491a37*/
  if ( !v8 ) /*0x491a3b*/
  {
    do /*0x491a46*/
    {
      v36 = (int **)v7[1]; /*0x491a46*/
      v9 = (int *)v36; /*0x491a41*/
      if ( !v36 && !*v7 ) /*0x491a4e*/
        return; /*0x491a4e*/
      v10 = *v7; /*0x491a54*/
      v8 = *v7 == 0; /*0x491a56*/
      v34 = *v7; /*0x491a58*/
      v29 = 0; /*0x491a5c*/
      if ( v8 || v10[1] <= 0 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10[2] + 0x78))(v10[2]) ) /*0x491a77*/
      {
        if ( v9 == v7[1] ) /*0x491ca2*/
          goto LABEL_43; /*0x491ca2*/
        v7 = *this; /*0x491ca8*/
      }
      else
      {
        v11 = (_DWORD *)*v10; /*0x491a81*/
        v8 = *v10 == 0; /*0x491a84*/
        v12 = (TESForm *)v10[2]; /*0x491a86*/
        v31 = v11; /*0x491a89*/
        if ( !v8 && *v11 ) /*0x491a93*/
        {
          while ( 1 ) /*0x491aa0*/
          {
            v13 = (ExtraDataList *)*v11; /*0x491aa0*/
            if ( !*v11 ) /*0x491aa4*/
              goto LABEL_44; /*0x491aa4*/
            v38 = (_DWORD *)v11[1]; /*0x491ab4*/
            v30 = 0; /*0x491ab8*/
            if ( a7 ) /*0x491abc*/
            {
              if ( a7 != ExtraDataList_GetOwner(v13) ) /*0x491acc*/
                break; /*0x491acc*/
            }
            if ( !ExtraDataList_GetOwner(v13) ) /*0x491ad4*/
              break; /*0x491ad4*/
            Owner = ExtraDataList_GetOwner(v13); /*0x491ae3*/
            if ( Owner == v35 ) /*0x491aec*/
              break; /*0x491aec*/
            v15 = (_DWORD *)*v34; /*0x491af6*/
            v16 = 0; /*0x491af8*/
            if ( !*v34 ) /*0x491af6*/
              goto LABEL_19; /*0x491af6*/
            do /*0x491b0c*/
            {
              if ( *v15 ) /*0x491b00*/
                ++v16; /*0x491b04*/
              v15 = (_DWORD *)v15[1]; /*0x491b07*/
            }
            while ( v15 ); /*0x491b0c*/
            if ( v16 > 1 ) /*0x491b11*/
              v30 = 1; /*0x491b1a*/
            else
LABEL_19:
              v29 = 1; /*0x491b13*/
            if ( a7 ) /*0x491b26*/
            {
              v33.m_data = 0; /*0x491b2c*/
              v33.m_dataLen = 0; /*0x491b30*/
              v33.m_bufLen = 0; /*0x491b35*/
              v40 = 0; /*0x491b3c*/
              ExtraCount = ExtraDataList_GetExtraCount(v13); /*0x491b4e*/
              value = stru_B382B0.value; /*0x491b54*/
              if ( ExtraCount <= 1 ) /*0x491b55*/
              {
                NameForForm = TESFullName_GetNameForForm(v12); /*0x491b7d*/
                BSStringT_Static_Format(&v33, "%s %s", NameForForm, value); /*0x491b90*/
              }
              else
              {
                v27 = flt_B37ED0[0xF2]; /*0x491b5c*/
                v18 = TESFullName_GetNameForForm(v12); /*0x491b5e*/
                BSStringT_Static_Format(&v33, "%i %s%s %s", ExtraCount, v18, (const char *)LODWORD(v27), value); /*0x491b72*/
              }
              v20 = sub_4702D0(v12, (TESObjectREFR *)reference); /*0x491ba0*/
              _sprintf(v39, "%s\\%s", "Icons", v20); /*0x491bb5*/
              ItemUpDownSound = GetItemUpDownSound(v12, 0, 0); /*0x491bc6*/
              st7_0 = fConstant_2; /*0x491bcb*/
              m_data = v33.m_data; /*0x491bd1*/
              QueueUIMessage((char)v12, st7_0, st6_0, v33.m_data, fConstant_2, (int)v39, (int)ItemUpDownSound); /*0x491be0*/
              v40 = 0xFFFFFFFF; /*0x491be6*/
              FormHeapFree((unsigned int)m_data); /*0x491bf1*/
              v33.m_data = 0; /*0x491bf9*/
              v33.m_bufLen = 0; /*0x491bfd*/
              v33.m_dataLen = 0; /*0x491c02*/
            }
            v26 = v37; /*0x491c10*/
            v25 = v13; /*0x491c12*/
            v23 = ExtraDataList_GetExtraCount(v13); /*0x491c15*/
            v24 = this; /*0x491c1a*/
            ContainerExtraData_RemoveForm( /*0x491c2b*/
              this,
              st5_0,
              st7_0,
              st6_0,
              (TESObjectREFR *)v35,
              v12,
              0,
              v23,
              v25,
              0,
              v26,
              0,
              0,
              1,
              0);
            v7 = *this; /*0x491c34*/
            if ( v29 ) /*0x491c36*/
              goto LABEL_44; /*0x491c36*/
            if ( v30 ) /*0x491c3c*/
            {
              v11 = (_DWORD *)*v34; /*0x491c42*/
              v31 = (_DWORD *)*v34; /*0x491c46*/
              if ( !*v34 ) /*0x491c4a*/
                goto LABEL_44; /*0x491c4a*/
            }
            else
            {
LABEL_31:
              if ( v38 == (_DWORD *)v31[1] ) /*0x491c60*/
                v31 = v38; /*0x491c6e*/
              else
                v31 = (_DWORD *)*v34; /*0x491c68*/
              if ( !v31 ) /*0x491c76*/
              {
                if ( v36 == (int **)v7[1] ) /*0x491c88*/
                  v7 = v36; /*0x491c8e*/
                else
                  v7 = *v24; /*0x491c8a*/
                goto LABEL_44; /*0x491c8c*/
              }
              v11 = v31; /*0x491c78*/
            }
          }
          v24 = this; /*0x491c51*/
          goto LABEL_31; /*0x491c51*/
        }
        if ( v9 == v7[1] ) /*0x491c95*/
        {
LABEL_43:
          v7 = (int **)v9; /*0x491cac*/
          continue; /*0x491cac*/
        }
        v7 = *this; /*0x491c9b*/
      }
LABEL_44:
      ; /*0x491cb0*/
    }
    while ( v7 ); /*0x491a46*/
  }
}
