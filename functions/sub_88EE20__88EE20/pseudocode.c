char __cdecl sub_88EE20(int a1)
{
  char v1; // bl
  int v2; // eax
  NiNode *v3; // esi
  const char *v4; // edi
  NiAVObject *ChildAtIndex; // eax
  NiAVObject *v6; // edi
  const char *m_pcName; // eax
  volatile LONG *BhkBlendCollisionObject; // eax
  NiAVObjects_Flags v9; // ax
  _DWORD *v10; // eax
  NiNode *m_parent; // esi
  const char *v12; // esi
  char v13; // dl
  int **v14; // eax
  int **v15; // eax
  unsigned int i; // edi
  char v18; // [esp+0h] [ebp-238h]
  size_t v19; // [esp+4h] [ebp-234h] BYREF
  int *v20[4]; // [esp+18h] [ebp-220h] BYREF
  char v21[512]; // [esp+28h] [ebp-210h] BYREF
  unsigned int v22; // [esp+234h] [ebp-4h]

  v1 = 0; /*0x88ee61*/
  if ( a1 ) /*0x88ee65*/
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x88ee70*/
    v3 = (NiNode *)v2; /*0x88ee72*/
    if ( v2 ) /*0x88ee76*/
    {
      v4 = *(const char **)(v2 + 8); /*0x88ee7c*/
      if ( v4 && (LODWORD(v19) = 3, !_strnicmp(v4, off_A738A4, v19)) ) /*0x88ee8f*/
      {
        if ( strlen(v4) == 5 ) /*0x88eeb2*/
        {
          ChildAtIndex = NiNode_GetChildAtIndex(v3, 0); /*0x88eebc*/
          v6 = ChildAtIndex; /*0x88eec1*/
          if ( ChildAtIndex ) /*0x88eec5*/
            m_pcName = ChildAtIndex->members.super.m_pcName; /*0x88eec7*/
          else
            m_pcName = 0; /*0x88eecc*/
          if ( m_pcName ) /*0x88eed0*/
          {
            if ( !CRT_StricmpLocaleDispatch(m_pcName + 6, "NonAccum") ) /*0x88eedf*/
            {
              BhkBlendCollisionObject = (volatile LONG *)NiAVObject_GetBhkBlendCollisionObject((int)v3); /*0x88eef0*/
              if ( BhkBlendCollisionObject ) /*0x88eefa*/
              {
                sub_435CE0(v6, BhkBlendCollisionObject); /*0x88ef03*/
                sub_435CE0((NiAVObject *)v3, 0); /*0x88ef0c*/
                v9 = v6->members.m_flags & 0xFFE9 | 6; /*0x88ef19*/
                LODWORD(v19) = &MEMORY[0xBA7F3C]; /*0x88ef1d*/
                v6->members.m_flags = v9; /*0x88ef24*/
                v1 = 1; /*0x88ef28*/
                v10 = sub_700010(v3, v19); /*0x88ef2a*/
                if ( v10 ) /*0x88ef31*/
                  (*(void (__thiscall **)(_DWORD *, NiAVObject *))(*v10 + 0x58))(v10, v6); /*0x88ef3b*/
                m_parent = v3->members.super.m_parent; /*0x88ef3d*/
                if ( m_parent ) /*0x88ef42*/
                {
                  v12 = m_parent->members.super.super.m_pcName; /*0x88ef48*/
                  if ( !v12 ) /*0x88ef4d*/
                    v12 = "Unknown"; /*0x88ef4f*/
                  v20[3] = (int *)&v19; /*0x88ef57*/
                  sub_8BBFB0((int)v20, 1, v21, 0x200u, 1); /*0x88ef6c*/
                  v13 = *v12; /*0x88ef71*/
                  LODWORD(v19) = " should be re-exported.\n"; /*0x88ef74*/
                  v18 = v13; /*0x88ef79*/
                  v22 = 0; /*0x88ef83*/
                  v14 = sub_8BBDB0(v20, "A very old skeleton for "); /*0x88ef8e*/
                  v15 = sub_8BBD90(v14, v18); /*0x88ef95*/
                  sub_8BBDB0(v15, (const char *)v19); /*0x88ef9c*/
                  (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x88efc2*/
                    unk_BA7FB0,
                    1,
                    0x234F224F,
                    v21,
                    ".\\bhkBlendCollisionObject.cpp",
                    0x23A);
                  v22 = 0xFFFFFFFF; /*0x88efc8*/
                  sub_8BC000(v20); /*0x88efd3*/
                }
              }
            }
          }
        }
      }
      else
      {
        for ( i = 0; v3->members.children.end > i; v1 = sub_88EE20((int)v3->members.children.data[i++]) ) /*0x88efda*/
          ; /*0x88effe*/
      }
    }
  }
  return v1; /*0x88f013*/
}
