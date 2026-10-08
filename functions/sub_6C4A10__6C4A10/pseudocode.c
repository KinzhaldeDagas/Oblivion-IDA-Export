// CustomAnimSupport decode: removes a sequence from the keyframe manager during live sequence pruning/cleanup.
int *__thiscall sub_6C4A10(unsigned __int16 *this, int *a2, int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  int *v6; // eax
  int v7; // ebp
  void (__thiscall ***v9)(_DWORD, int); // esi
  unsigned int v10; // edx
  unsigned int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  _DWORD *v19; // ecx
  unsigned int i; // eax
  int v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+18h] [ebp-18h] BYREF
  int v23; // [esp+1Ch] [ebp-14h]
  int v24; // [esp+20h] [ebp-10h]
  unsigned int v25; // [esp+2Ch] [ebp-4h]

  v4 = *(this + 0x23); /*0x6c4a39*/
  v5 = 0; /*0x6c4a3f*/
  v23 = 0; /*0x6c4a43*/
  if ( v4 ) /*0x6c4a47*/
  {
    v6 = *((int **)this + 0x10); /*0x6c4a49*/
    while ( 1 ) /*0x6c4a50*/
    {
      v7 = *v6; /*0x6c4a50*/
      v21 = *v6; /*0x6c4a56*/
      if ( *v6 == a3 ) /*0x6c4a5a*/
        break; /*0x6c4a5a*/
      ++v5; /*0x6c4a5c*/
      ++v6; /*0x6c4a5f*/
      if ( v5 >= v4 ) /*0x6c4a64*/
        goto LABEL_5; /*0x6c4a64*/
    }
    v24 = *v6; /*0x6c4a84*/
    if ( v7 ) /*0x6c4a88*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x6c4a8e*/
    v25 = 0; /*0x6c4a9d*/
    sub_6D7F60((int)(this + 0x1E), &v22, v5); /*0x6c4aa1*/
    if ( v22 ) /*0x6c4aac*/
    {
      v9 = (void (__thiscall ***)(_DWORD, int))v22; /*0x6c4aae*/
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x6c4ab4*/
        (**v9)(v9, 1); /*0x6c4aca*/
    }
    v10 = *((_DWORD *)this + 0x17); /*0x6c4acc*/
    v11 = 0; /*0x6c4ad2*/
    if ( v10 ) /*0x6c4ad6*/
    {
      v12 = *((_DWORD **)this + 0x18); /*0x6c4adb*/
      while ( !*v12 ) /*0x6c4ae3*/
      {
        ++v11; /*0x6c4ae5*/
        ++v12; /*0x6c4ae8*/
        if ( v11 >= v10 ) /*0x6c4aed*/
          goto LABEL_15; /*0x6c4aed*/
      }
      v13 = *(_DWORD **)(*((_DWORD *)this + 0x18) + 4 * v11); /*0x6c4b42*/
    }
    else
    {
LABEL_15:
      v13 = 0; /*0x6c4aef*/
    }
    if ( v13 ) /*0x6c4af3*/
    {
      while ( 1 ) /*0x6c4af5*/
      {
        v14 = v13[2]; /*0x6c4af5*/
        v15 = v13[1]; /*0x6c4af8*/
        v13 = (_DWORD *)*v13; /*0x6c4afb*/
        v23 = v14; /*0x6c4aff*/
        if ( !v13 ) /*0x6c4b03*/
        {
          v16 = (*(int (__thiscall **)(unsigned __int16 *, int))(*((_DWORD *)this + 0x16) + 4))(this + 0x2C, v15); /*0x6c4b0d*/
          v17 = *((_DWORD *)this + 0x17); /*0x6c4b0f*/
          v18 = v16 + 1; /*0x6c4b12*/
          if ( v18 >= v17 ) /*0x6c4b17*/
          {
LABEL_22:
            v13 = 0; /*0x6c4b30*/
          }
          else
          {
            v19 = (_DWORD *)(*((_DWORD *)this + 0x18) + 4 * v18); /*0x6c4b1c*/
            while ( !*v19 ) /*0x6c4b24*/
            {
              ++v18; /*0x6c4b26*/
              ++v19; /*0x6c4b29*/
              if ( v18 >= v17 ) /*0x6c4b2e*/
                goto LABEL_22; /*0x6c4b2e*/
            }
            v13 = (_DWORD *)*v19; /*0x6c4b47*/
          }
        }
        if ( v23 == a3 ) /*0x6c4b3a*/
          break; /*0x6c4b3a*/
        if ( !v13 ) /*0x6c4b3e*/
          goto LABEL_29; /*0x6c4b3e*/
      }
      NiTMap_RemoveAt((_DWORD *)this + 0x16, v15); /*0x6c4b4e*/
LABEL_29:
      v7 = v21; /*0x6c4b53*/
    }
    for ( i = 0; i < *((_DWORD *)this + 0x15); ++i ) /*0x6c4b57*/
    {
      if ( *(_DWORD *)(*((_DWORD *)this + 0x13) + 4 * i) == a3 ) /*0x6c4b6d*/
      {
        --*((_DWORD *)this + 0x15); /*0x6c4b6f*/
        *(_DWORD *)(*((_DWORD *)this + 0x13) + 4 * i) = *(_DWORD *)(*((_DWORD *)this + 0x13) /*0x6c4b7b*/
                                                                  + 4 * *((_DWORD *)this + 0x15));
      }
    }
    sub_6CAC60((_DWORD *)v7); /*0x6c4b88*/
    *(_DWORD *)(v7 + 0x40) = 0; /*0x6c4b95*/
    *a2 = v7; /*0x6c4b9c*/
    InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x6c4b9e*/
    v25 = 0xFFFFFFFF; /*0x6c4ba5*/
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6c4ba9*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6c4bbc*/
    return a2; /*0x6c4bbe*/
  }
  else
  {
LABEL_5:
    *a2 = 0; /*0x6c4a66*/
    return a2; /*0x6c4a66*/
  }
}
