// Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
void __thiscall NiAVObject_InitializePropertyState(NiAVObject *this)
{
  volatile LONG *v2; // esi
  DWORD CurrentThreadId; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  NiNode *m_parent; // ecx
  int *v6; // eax
  NiPropertyState *v7; // esi
  NiPropertyState *v9; // eax
  NiPropertyState *v10; // eax
  int v11; // [esp+14h] [ebp-14h] BYREF
  NiPropertyState *v12; // [esp+18h] [ebp-10h] BYREF
  unsigned int v13; // [esp+24h] [ebp-4h]

  v2 = 0; /*0x707639*/
  v11 = 0; /*0x70763d*/
  v13 = 0; /*0x707646*/
  EnterCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB3F9B0][0x14]); /*0x70764a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x707650*/
  ++LODWORD(MEMORY[0xB3F9B0][0x33]); /*0x707656*/
  v4 = InterlockedDecrement; /*0x70765d*/
  LODWORD(MEMORY[0xB3F9B0][0x32]) = CurrentThreadId; /*0x707663*/
  m_parent = this->members.m_parent; /*0x707668*/
  if ( m_parent ) /*0x70766d*/
  {
    v6 = (int *)sub_70A3E0(m_parent, (UInt32 *)&v12); /*0x707678*/
    LOBYTE(v13) = 1; /*0x707682*/
    OB_NiSmartPointer_Assign_010201A0(&v11, v6); /*0x707687*/
    v7 = v12; /*0x70768c*/
    LOBYTE(v13) = 0; /*0x707692*/
    if ( v12 ) /*0x707696*/
    {
      if ( !v4((volatile LONG *)v12 + 1) ) /*0x70769c*/
      {
        if ( v7 ) /*0x7076a4*/
          (**(void (__thiscall ***)(NiPropertyState *, int))v7)(v7, 1); /*0x7076ae*/
      }
    }
    v2 = (volatile LONG *)v11; /*0x7076b0*/
  }
  else
  {
    v9 = (NiPropertyState *)FormHeapAlloc(0x30u); /*0x707728*/
    v12 = v9; /*0x707730*/
    LOBYTE(v13) = 2; /*0x707736*/
    if ( v9 ) /*0x70773b*/
      v10 = sub_7319E0(v9); /*0x70773f*/
    else
      v10 = 0; /*0x707746*/
    LOBYTE(v13) = 0; /*0x70774a*/
    if ( v10 ) /*0x70774e*/
    {
      v2 = (volatile LONG *)v10; /*0x707754*/
      v11 = (int)v10; /*0x70775a*/
      InterlockedIncrement((volatile LONG *)v10 + 1); /*0x70775e*/
    }
  }
  this->vtbl->UpdatePropertiesDownward(this, (NiPropertyState *)v2); /*0x7076bc*/
  if ( v2 ) /*0x7076c0*/
  {
    if ( !v4(v2 + 1) ) /*0x7076c6*/
      (**(void (__thiscall ***)(volatile LONG *, int))v2)(v2, 1); /*0x7076d4*/
  }
  if ( LODWORD(MEMORY[0xB3F9B0][0x33])-- == 1 ) /*0x7076d8*/
    MEMORY[0xB3F9B0][0x32] = 0.0; /*0x7076e1*/
  LeaveCriticalSection((LPCRITICAL_SECTION)&MEMORY[0xB3F9B0][0x14]); /*0x7076ec*/
  v13 = 0xFFFFFFFF; /*0x7076f4*/
}
