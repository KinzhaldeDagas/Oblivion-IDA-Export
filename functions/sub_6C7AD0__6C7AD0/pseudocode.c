Ni2DBuffer *__thiscall sub_6C7AD0(Ni2DBuffer **this, _DWORD *a2)
{
  _DWORD *v2; // esi
  Ni2DBuffer *v4; // eax
  Ni2DBuffer *result; // eax
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int *v9; // ebx
  Ni2DBuffer *v10; // eax
  int v11; // [esp+8h] [ebp-8h]
  unsigned int v12; // [esp+Ch] [ebp-4h]

  v2 = a2; /*0x6c7ad5*/
  nullsub_returnvVoid_1arg((int)a2); /*0x6c7adc*/
  if ( a2[0x36] >= 0xA010068u ) /*0x6c7aed*/
  {
    v10 = (Ni2DBuffer *)sub_7124A0(a2); /*0x6c7b8f*/
    NiSmartPointer_Set__(this + 8, v10); /*0x6c7b98*/
    result = (Ni2DBuffer *)sub_7124A0(a2); /*0x6c7b9f*/
    *(this + 0x10) = result; /*0x6c7ba4*/
  }
  else
  {
    v4 = (Ni2DBuffer *)sub_7124A0(a2); /*0x6c7af3*/
    NiSmartPointer_Set__(this + 8, v4); /*0x6c7afc*/
    result = 0; /*0x6c7b01*/
    v12 = 0; /*0x6c7b06*/
    if ( *(this + 3) ) /*0x6c7b03*/
    {
      v11 = 0; /*0x6c7b12*/
      while ( 1 ) /*0x6c7b2f*/
      {
        v6 = sub_7124A0(v2); /*0x6c7b2f*/
        v7 = (int)*(this + 5); /*0x6c7b31*/
        v8 = *(_DWORD *)(v7 + v11 + 4); /*0x6c7b34*/
        v9 = (int *)(v7 + v11 + 4); /*0x6c7b3a*/
        if ( v8 != v6 ) /*0x6c7b3e*/
        {
          if ( v8 ) /*0x6c7b42*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x6c7b48*/
              (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x6c7b5e*/
          }
          *v9 = v6; /*0x6c7b62*/
          if ( v6 ) /*0x6c7b64*/
            InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x6c7b6a*/
        }
        v11 += 0x10; /*0x6c7b74*/
        result = (Ni2DBuffer *)++v12; /*0x6c7b79*/
        if ( v12 >= (unsigned int)*(this + 3) ) /*0x6c7b83*/
          break; /*0x6c7b83*/
        v2 = a2; /*0x6c7b20*/
      }
    }
  }
  return result; /*0x6c7b87*/
}
