// Pass222: Recursive inherited property-state build; creates root default state then calls 0x7077D0 cloneInherited=0.
UInt32 *__thiscall sub_70A3E0(_DWORD *this, UInt32 *a2)
{
  Ni2DBuffer *v3; // esi
  _DWORD *v4; // ecx
  int *v5; // eax
  NiPropertyState *v6; // esi
  NiPropertyState *v8; // eax
  NiPropertyState *v9; // eax
  int v10; // [esp+14h] [ebp-18h] BYREF
  NiPropertyState *v11; // [esp+18h] [ebp-14h] BYREF
  int v12; // [esp+1Ch] [ebp-10h]
  int v13; // [esp+28h] [ebp-4h]

  v3 = 0; /*0x70a409*/
  v12 = 0; /*0x70a40b*/
  v10 = 0; /*0x70a413*/
  v4 = (_DWORD *)*(this + 7); /*0x70a417*/
  v13 = 1; /*0x70a421*/
  if ( v4 ) /*0x70a425*/
  {
    v5 = (int *)sub_70A3E0(v4, (UInt32 *)&v11); /*0x70a430*/
    LOBYTE(v13) = 2; /*0x70a43a*/
    OB_NiSmartPointer_Assign_010201A0(&v10, v5); /*0x70a43f*/
    v6 = v11; /*0x70a444*/
    LOBYTE(v13) = 1; /*0x70a44a*/
    if ( v11 ) /*0x70a44e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v11 + 1) ) /*0x70a454*/
      {
        if ( v6 ) /*0x70a460*/
          (**(void (__thiscall ***)(NiPropertyState *, int))v6)(v6, 1); /*0x70a469*/
      }
    }
    v3 = (Ni2DBuffer *)v10; /*0x70a46b*/
  }
  else
  {
    v8 = (NiPropertyState *)FormHeapAlloc(0x30u); /*0x70a4bc*/
    v11 = v8; /*0x70a4c4*/
    LOBYTE(v13) = 3; /*0x70a4ca*/
    if ( v8 ) /*0x70a4cf*/
      v9 = sub_7319E0(v8); /*0x70a4d3*/
    else
      v9 = 0; /*0x70a4da*/
    LOBYTE(v13) = 1; /*0x70a4de*/
    if ( v9 ) /*0x70a4e2*/
    {
      v3 = (Ni2DBuffer *)v9; /*0x70a4e4*/
      v10 = (int)v9; /*0x70a4ea*/
      InterlockedIncrement((volatile LONG *)v9 + 1); /*0x70a4ee*/
    }
  }
  sub_7077D0(this, a2, v3, 0);                  // Fog property propagation decode: recursive inherited-state build applies local properties through 0x7077D0; root B333E4 becomes inherited fog slot +0x0C. /*0x70a479*/
  v12 = 1; /*0x70a480*/
  LOBYTE(v13) = 0; /*0x70a484*/
  if ( v3 ) /*0x70a489*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x70a48f*/
      (*(void (__thiscall **)(Ni2DBuffer *, int))v3->__vftable)(v3, 1); /*0x70a4a0*/
  }
  return a2; /*0x70a4a4*/
}
