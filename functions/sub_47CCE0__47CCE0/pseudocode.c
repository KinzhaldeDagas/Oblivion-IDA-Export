void __thiscall sub_47CCE0(BSTempNodeManager *this, NiNode *a2)
{
  double v3; // st6
  int v4; // edi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // ecx
  int v7; // esi
  NiRTTI *v8; // eax
  char v9; // al
  int v10; // eax
  void (__thiscall ***v11)(_DWORD, int); // esi
  float v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h] BYREF
  float v14; // [esp+14h] [ebp+4h]

  if ( 0.0 == *((float *)this + 0x37) ) /*0x47ccf8*/
    v3 = *((float *)this + 0x37); /*0x47cd04*/
  else
    v3 = *(float *)&a2 - *((float *)this + 0x37); /*0x47ccfc*/
  v4 = *((unsigned __int16 *)this + 0x5B); /*0x47cd0a*/
  *((float *)this + 0x37) = *(float *)&a2; /*0x47cd15*/
  if ( v4 )
  {
    v5 = InterlockedDecrement; /*0x47cd26*/
    do
    {
      if ( *((unsigned __int16 *)this + 0x5B) > (unsigned int)--v4 )
      {
        v6 = *((_DWORD *)this + 0x2C); /*0x47cd42*/
        v7 = *(_DWORD *)(v6 + 4 * v4); /*0x47cd48*/
        if ( v7 )
        {
          v8 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 4))(*(_DWORD *)(v6 + 4 * v4)); /*0x47cd5a*/
          if ( v8 ) /*0x47cd5e*/
          {
            while ( v8 != &stru_B33E88 ) /*0x47cd65*/
            {
              v8 = v8->parent; /*0x47cd6b*/
              if ( !v8 ) /*0x47cd70*/
                goto LABEL_11; /*0x47cd70*/
            }
            v9 = 1; /*0x47cdfc*/
          }
          else
          {
LABEL_11:
            v9 = 0; /*0x47cd72*/
          }
          v10 = v9 != 0 ? v7 : 0;
          if ( v10 ) /*0x47cd7c*/
          {
            v14 = v3; /*0x47cd1b*/
            v12 = *(float *)(v10 + 0xDC) - v14; /*0x47cd88*/
            *(float *)(v10 + 0xDC) = v12; /*0x47cd90*/
            if ( v12 < 0.0 ) /*0x47cda1*/
              *(float *)(v10 + 0xDC) = 0.0; /*0x47cda3*/
            if ( 0.0 == *(float *)(v10 + 0xDC) ) /*0x47cdb4*/
            {
              (*(void (__thiscall **)(BSTempNodeManager *, int *, int))(*(_DWORD *)this + 0x8C))(this, &v13, v4); /*0x47cdc6*/
              if ( v13 ) /*0x47cdce*/
              {
                v11 = (void (__thiscall ***)(_DWORD, int))v13; /*0x47cdd0*/
                if ( !v5((volatile LONG *)(v13 + 4)) ) /*0x47cdd6*/
                  (**v11)(v11, 1); /*0x47cde8*/
              }
            }
          }
        }
      }
    }
    while ( v4 );
  }
}
