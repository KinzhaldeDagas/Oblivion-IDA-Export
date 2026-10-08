NodeVoid *__thiscall sub_8A53E0(NodeVoid *this)
{
  NodeVoid *result; // eax
  NodeVoid *v3; // ebp
  bool v4; // bl
  void (__thiscall ***v5)(void *, int); // esi
  int *v6; // esi
  NiRTTI *v7; // eax
  char v8; // al
  void (__thiscall ***v9)(void *, int); // edi
  int v10; // eax
  int v11; // edx
  int v12; // [esp+14h] [ebp-20h]
  int v13; // [esp+18h] [ebp-1Ch]
  void *outData; // [esp+20h] [ebp-14h] BYREF
  void *v16; // [esp+24h] [ebp-10h] BYREF
  unsigned int v17; // [esp+30h] [ebp-4h]

  result = (NodeVoid *)(*((_DWORD *)this + 6) >> 2); /*0x8a5412*/
  v12 = 0; /*0x8a5417*/
  if ( (*(_DWORD *)(this + 3) & 4) != 0 )
  {
    result = (NodeVoid *)(*((int (__thiscall **)(NodeVoid *))this->data + 0x16))(this); /*0x8a5427*/
    v13 = result ? (int)result[0x56].data : 0;
    if ( v13 )
    {
      v3 = this + 2; /*0x8a5447*/
      while ( 1 )
      {
        v4 = 0; /*0x8a5464*/
        if ( v3 ) /*0x8a544c*/
        {
          v12 |= 1u; /*0x8a545a*/
          if ( *NodeVoid_GetDataAddRef(v3, &outData) ) /*0x8a545f*/
            v4 = 1; /*0x8a544c*/
        }
        if ( (v12 & 1) != 0 ) /*0x8a546f*/
        {
          v5 = (void (__thiscall ***)(void *, int))outData; /*0x8a5471*/
          v12 &= ~1u; /*0x8a5475*/
          if ( outData ) /*0x8a547c*/
          {
            if ( !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x8a5482*/
            {
              if ( v5 ) /*0x8a548e*/
                (**v5)(v5, 1); /*0x8a5498*/
            }
          }
        }
        if ( !v4 ) /*0x8a549c*/
          break; /*0x8a549c*/
        v6 = (int *)*NodeVoid_GetDataAddRef(v3, &v16); /*0x8a54ae*/
        v17 = 0; /*0x8a54b2*/
        if ( v6 )
        {
          v7 = (NiRTTI *)(*(int (__thiscall **)(int *))(*v6 + 4))(v6); /*0x8a54c3*/
          if ( v7 ) /*0x8a54c7*/
          {
            while ( v7 != &MEMORY[0xBA7D50] ) /*0x8a54d5*/
            {
              v7 = v7->parent; /*0x8a54d7*/
              if ( !v7 ) /*0x8a54dc*/
                goto LABEL_21; /*0x8a54dc*/
            }
            v8 = 1; /*0x8a5543*/
          }
          else
          {
LABEL_21:
            v8 = 0; /*0x8a54de*/
          }
          v6 = v8 != 0 ? v6 : 0;
        }
        v9 = (void (__thiscall ***)(void *, int))v16; /*0x8a54e8*/
        v17 = 0xFFFFFFFF; /*0x8a54ee*/
        if ( v16 ) /*0x8a54f6*/
        {
          if ( !InterlockedDecrement((volatile LONG *)v16 + 1) ) /*0x8a54fc*/
          {
            if ( v9 ) /*0x8a5508*/
              (**v9)(v9, 1); /*0x8a5512*/
          }
        }
        if ( v6 ) /*0x8a5516*/
        {
          v10 = (*(int (__thiscall **)(int *))(*v6 + 0x58))(v6); /*0x8a5523*/
          v11 = *v6; /*0x8a5527*/
          if ( v10 ) /*0x8a552b*/
          {
            (*(void (__thiscall **)(int *))(v11 + 0x60))(v6); /*0x8a5530*/
            sub_67A850((int *)this + 4); /*0x8a5539*/
          }
          else
          {
            v3 = v3->next; /*0x8a554e*/
            (*(void (__thiscall **)(int *, int))(v11 + 0x5C))(v6, v13); /*0x8a5552*/
          }
        }
      }
      *((_DWORD *)this + 6) &= ~4u; /*0x8a555d*/
      return this; /*0x8a5559*/
    }
  }
  return result; /*0x8a5561*/
}
