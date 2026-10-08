//
// GPU world census audit 2026-09-27: the effective property state is formed by managed slot replacement at state+8+4*propertyKind. A geometry census must retain its final inherited/overridden state, not infer material behavior solely from the geometry local property list.
UInt32 *__thiscall sub_7077D0(_DWORD *this, UInt32 *arg0, Ni2DBuffer *a2, char a4)
{
  DWORD CurrentThreadId; // eax
  int *v7; // eax
  _DWORD *v8; // ebp
  volatile LONG *v9; // esi
  int v10; // eax
  volatile LONG *v11; // edi
  volatile LONG **v12; // ebx
  bool v13; // zf
  UInt32 v14; // esi
  int *v15; // [esp-4h] [ebp-2Ch]
  UInt32 v16; // [esp+14h] [ebp-14h] BYREF
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+24h] [ebp-4h]

  v17 = 0; /*0x7077fb*/
  if ( *(this + 0x29) ) /*0x7077ff*/
  {
    v16 = 0; /*0x707826*/
    v18 = 1; /*0x707834*/
    EnterCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB3F9B0][0x14]); /*0x707838*/
    CurrentThreadId = GetCurrentThreadId(); /*0x70783e*/
    ++LODWORD(MEMORY[0xB3F9B0][0x33]); /*0x707844*/
    LODWORD(MEMORY[0xB3F9B0][0x32]) = CurrentThreadId; /*0x70784f*/
    if ( a4 ) /*0x707854*/
    {
      v7 = (int *)FormHeapAlloc(0x30u); /*0x707858*/
      LOBYTE(v18) = 1; /*0x707879*/
      if ( v7 ) /*0x70786b*/
      {
        v15 = sub_731620(v7, (int)a2); /*0x70787d*/
        NiSmartPointer_Set__((Ni2DBuffer **)&v16, (Ni2DBuffer *)v15); /*0x70787e*/
      }
      else
      {
        NiSmartPointer_Set__((Ni2DBuffer **)&v16, 0); /*0x707888*/
      }
    }
    else
    {
      NiSmartPointer_Set__((Ni2DBuffer **)&v16, a2); /*0x707893*/
    }
    v8 = (_DWORD *)*(this + 0x27); /*0x707898*/
    while ( v8 ) /*0x7078a0*/
    {
      v9 = (volatile LONG *)v8[2]; /*0x7078a2*/
      v8 = (_DWORD *)*v8; /*0x7078aa*/
      if ( v9 ) /*0x7078ad*/
      {                                         // Fog property propagation decode: GetPropertyType guard before state slot write; fog kind 1 is accepted.
        if ( (*(int (__thiscall **)(volatile LONG *))(*v9 + 0x4C))(v9) <= 0xA ) /*0x7078bb*/
        {
          v10 = (*(int (__thiscall **)(volatile LONG *))(*v9 + 0x4C))(v9); /*0x7078c4*/
          v11 = *(volatile LONG **)(v16 + 4 * v10 + 8);// Fog property propagation decode: old slot read uses state +0x08 + 4*kind; fog kind 1 reads state +0x0C. /*0x7078ca*/
          v12 = (volatile LONG **)(v16 + 4 * v10 + 8);// Fog property propagation decode: target slot formula state +0x08 + 4*kind; BSFogProperty kind 1 lands at state +0x0C. /*0x7078d0*/
          if ( v11 != v9 ) /*0x7078d4*/
          {
            if ( v11 ) /*0x7078d8*/
            {
              if ( !InterlockedDecrement(v11 + 1) ) /*0x7078de*/
                (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1); /*0x7078f4*/
            }
            *v12 = v9; /*0x7078f6*/
            InterlockedIncrement(v9 + 1); /*0x7078fc*/
          }
        }
      }
    }
    v13 = LODWORD(MEMORY[0xB3F9B0][0x33])-- == 1; /*0x70790b*/
    if ( v13 ) /*0x707911*/
      MEMORY[0xB3F9B0][0x32] = 0.0; /*0x707913*/
    LeaveCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB3F9B0][0x14]); /*0x707922*/
    v14 = v16; /*0x707928*/
    v13 = v16 == 0; /*0x70792c*/
    *arg0 = v16; /*0x707932*/
    if ( !v13 ) /*0x707934*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x70793a*/
    v17 = 1; /*0x707942*/
    LOBYTE(v18) = 0; /*0x707946*/
    if ( v14 ) /*0x70794b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x707951*/
        (**(void (__thiscall ***)(UInt32, int))v14)(v14, 1); /*0x707962*/
    }
    return arg0; /*0x707964*/
  }
  else
  {
    *arg0 = (UInt32)a2; /*0x707811*/
    if ( a2 ) /*0x707813*/
      InterlockedIncrement((volatile LONG *)&a2->members); /*0x707819*/
    return arg0; /*0x70781f*/
  }
}
