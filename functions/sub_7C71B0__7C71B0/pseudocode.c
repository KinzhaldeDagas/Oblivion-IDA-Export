// Reorder the full light list using ShadowSceneLight_ComputeCameraRelativeScore and cached score +0xD0.
void __thiscall sub_7C71B0(_DWORD *this, float *a2)
{
  _DWORD *v2; // edi
  int *v3; // ebx
  int v4; // eax
  int *v5; // ebp
  int v6; // esi
  int *v7; // edi
  bool v8; // zf
  int *v9; // ebp
  void (__thiscall ***v10)(_DWORD, int); // edi
  int v12; // [esp+18h] [ebp-24h] BYREF
  int *v13; // [esp+1Ch] [ebp-20h] BYREF
  float v14; // [esp+20h] [ebp-1Ch]
  float v15; // [esp+24h] [ebp-18h]
  int *v16; // [esp+28h] [ebp-14h]
  int v17; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v18; // [esp+38h] [ebp-4h]

  v2 = this; /*0x7c71d7*/
  v3 = (int *)*(this + 0x3A); /*0x7c71e7*/
  ShadowSceneLight_ComputeCameraRelativeScore(*(this + 0x46), a2); /*0x7c71ee*/
  if ( v3 ) /*0x7c71f7*/
  {
    while ( 1 ) /*0x7c720b*/
    {
      v4 = v3[2]; /*0x7c720b*/
      v5 = v3; /*0x7c720d*/
      v3 = (int *)*v3; /*0x7c720f*/
      v16 = v5; /*0x7c7214*/
      v15 = ShadowSceneLight_ComputeCameraRelativeScore(v4, a2); /*0x7c721d*/
      v6 = 0; /*0x7c7221*/
      v12 = 0; /*0x7c7223*/
      v7 = (int *)v2[0x3A]; /*0x7c7227*/
      v18 = 0; /*0x7c722f*/
      if ( v7 != v5 ) /*0x7c7233*/
      {
        while ( 1 ) /*0x7c7240*/
        {
          v8 = v6 == v7[2]; /*0x7c7240*/
          v9 = v7 + 2; /*0x7c7243*/
          v13 = v7; /*0x7c7246*/
          v7 = (int *)*v7; /*0x7c724a*/
          if ( !v8 ) /*0x7c724c*/
          {
            if ( v6 ) /*0x7c7250*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7c7256*/
                (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7c7268*/
            }
            v6 = *v9; /*0x7c726a*/
            v12 = *v9; /*0x7c726f*/
            if ( v12 ) /*0x7c7273*/
              InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x7c7279*/
          }
          v14 = *(float *)(v6 + 0xD0); /*0x7c7285*/
          if ( v15 > (double)v14 ) /*0x7c7298*/
            break; /*0x7c7298*/
          if ( v7 == v16 ) /*0x7c729e*/
            goto LABEL_18; /*0x7c729e*/
        }
        NiTRefPointerList__RemovePosition((int **)this + 0x39, &v17, &v13); /*0x7c72b8*/
        if ( v17 ) /*0x7c72c3*/
        {
          v10 = (void (__thiscall ***)(_DWORD, int))v17; /*0x7c72c5*/
          if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x7c72cb*/
            (**v10)(v10, 1); /*0x7c72e1*/
        }
        NiTRefPointerList_InsertBeforePosition(this + 0x39, (int)v13, &v12); /*0x7c72ef*/
      }
LABEL_18:
      v18 = 0xFFFFFFFF; /*0x7c72f4*/
      if ( v6 ) /*0x7c72fe*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7c7304*/
          (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7c7316*/
      }
      if ( !v3 ) /*0x7c731a*/
        break; /*0x7c731a*/
      v2 = this; /*0x7c7200*/
    }
  }
}
