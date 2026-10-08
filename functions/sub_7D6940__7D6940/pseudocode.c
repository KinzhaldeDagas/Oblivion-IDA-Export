// Remove one receiver geometry from both the property-side shadow-light association and the light-local object list.
LONG __thiscall sub_7D6940(int **this, NiNode *a2)
{
  NiNode *v3; // ebx
  NiProperty *NiPropertyByID; // esi
  BOOL v5; // eax
  _DWORD *v6; // eax
  LONG result; // eax
  LONG (__stdcall *v8)(volatile LONG *); // edi
  int (__thiscall ***v9)(_DWORD, int); // esi
  NiNode *v10; // esi
  LONG v11; // [esp+10h] [ebp-10h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-4h]

  v3 = a2; /*0x7d6966*/
  NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4); /*0x7d6973*/
  if ( NiPropertyByID )
  {
    v5 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1 /*0x7d699c*/
      && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
    v6 = v5 ? (_DWORD *)NiPropertyByID : 0;
    if ( v6 ) /*0x7d69a4*/
      BSShaderProperty_RemoveShadowLight(v6, (int)this); /*0x7d69a9*/
  }
  a2 = v3; /*0x7d69b0*/
  if ( v3 ) /*0x7d69b4*/
    InterlockedIncrement((volatile LONG *)&v3->members); /*0x7d69ba*/
  v12 = 0; /*0x7d69d0*/
  NiTRefPointerList__RemoveFirstByValue(this + 0x39, &v11, (int *)&a2); /*0x7d69d8*/
  result = v11; /*0x7d69dd*/
  v8 = InterlockedDecrement; /*0x7d69e3*/
  if ( v11 ) /*0x7d69e9*/
  {
    v9 = (int (__thiscall ***)(_DWORD, int))v11; /*0x7d69eb*/
    result = v8((volatile LONG *)(v11 + 4)); /*0x7d69f1*/
    if ( !result ) /*0x7d69f5*/
      result = (**v9)(v9, 1); /*0x7d6a03*/
  }
  v10 = a2; /*0x7d6a05*/
  v12 = 0xFFFFFFFF; /*0x7d6a0b*/
  if ( a2 ) /*0x7d6a13*/
  {
    result = v8((volatile LONG *)&a2->members); /*0x7d6a19*/
    if ( !result ) /*0x7d6a1d*/
      return ((LONG (__thiscall *)(NiNode *, int))v10->vtbl->super.super.super.Destructor)(v10, 1); /*0x7d6a27*/
  }
  return result; /*0x7d6a29*/
}
