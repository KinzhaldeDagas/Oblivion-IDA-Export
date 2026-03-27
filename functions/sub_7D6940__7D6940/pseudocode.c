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

  v3 = a2;
  NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4);
  if ( NiPropertyByID )
  {
    v5 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
      && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
    v6 = v5 ? (_DWORD *)NiPropertyByID : 0;
    if ( v6 )
      sub_7EE720(v6, (char)this);
  }
  a2 = v3;
  if ( v3 )
    InterlockedIncrement((volatile LONG *)&v3->members);
  v12 = 0;
  sub_7D5F80(this + 0x39, &v11, (int *)&a2);
  result = v11;
  v8 = InterlockedDecrement;
  if ( v11 )
  {
    v9 = (int (__thiscall ***)(_DWORD, int))v11;
    result = v8((volatile LONG *)(v11 + 4));
    if ( !result )
      result = (**v9)(v9, 1);
  }
  v10 = a2;
  v12 = 0xFFFFFFFF;
  if ( a2 )
  {
    result = v8((volatile LONG *)&a2->members);
    if ( !result )
      return ((LONG (__thiscall *)(NiNode *, int))v10->vtbl->super.super.super.Destructor)(v10, 1);
  }
  return result;
}
