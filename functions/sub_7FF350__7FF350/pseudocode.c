// Oblivion Lighting30 node-property factory/validator. The existing-property fast path accepts shader-property virtual subtype 10 at slot +0x54. A complete MSVC-derived census of all 17 native BSShaderProperty-family vtables proves Lighting30ShaderProperty is the sole native subtype-10 class. The replacement path removes an incompatible property, allocates 0x108 bytes, constructs exact Lighting30ShaderProperty, attaches it, runs geometry setup at +0x58, and validates renderer data at +0x8C.
bool __stdcall Lighting30Shader_EnsureSubtype10PropertyOnNode(NiNode *a1)
{
  NiNode *v1; // edi
  NiProperty *NiPropertyByID; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiNode *v4; // esi
  Lighting30ShaderProperty *v5; // eax
  BSShaderProperty *v6; // esi
  void **vtlb; // esi

  v1 = a1; /*0x7ff374*/
  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4); /*0x7ff37c*/
  v3 = InterlockedDecrement; /*0x7ff383*/
  if ( NiPropertyByID ) /*0x7ff389*/
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xA ) /*0x7ff3a0*/
      return 1;                                 // Accept an existing shader property when virtual +0x54 returns subtype 10. The complete 17-vtable native census proves this is retail-class-unique to Lighting30ShaderProperty. /*0x7ff3a0*/
    sub_708560((int **)v1, (volatile LONG **)&a1, 4); /*0x7ff3af*/
    if ( a1 ) /*0x7ff3ba*/
    {
      v4 = a1; /*0x7ff3bc*/
      if ( !v3((volatile LONG *)&a1->members) ) /*0x7ff3c2*/
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x7ff3d4*/
    }
  }
  v5 = (Lighting30ShaderProperty *)FormHeapAlloc(0x108u);// Allocate exactly 0x108 bytes for a newly required Lighting30ShaderProperty. /*0x7ff3db*/
  if ( v5 ) /*0x7ff3f1*/
    v6 = (BSShaderProperty *)Lighting30ShaderProperty_Constructor(v5);// Construct the exact Oblivion Lighting30ShaderProperty; its constructor stores vptr A9576C. /*0x7ff3fa*/
  else
    v6 = 0; /*0x7ff3fe*/
  sub_405680(v1, v6);                           // Attach the newly constructed exact Lighting30ShaderProperty to the NiNode. /*0x7ff40b*/
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, NiNode *))v6->vtbl + 0x16))(v6, v1) )// Run exact property virtual +0x58 geometry setup after attachment. /*0x7ff418*/
  {
    sub_4A1220((int ***)v1, (int)v6); /*0x7ff421*/
    vtlb = v1->members.effects.vtlb; /*0x7ff426*/
    if ( vtlb ) /*0x7ff42e*/
    {
      if ( !v3((volatile LONG *)vtlb + 1) ) /*0x7ff434*/
        (*(void (__thiscall **)(void **, int))*vtlb)(vtlb, 1); /*0x7ff446*/
      v1->members.effects.vtlb = 0; /*0x7ff448*/
    }
    return 0; /*0x7ff448*/
  }
  return (*((int (__thiscall **)(BSShaderProperty *, _DWORD))v6->vtbl + 0x23))(v6, 0) != 0;// Validate renderer data through exact property virtual +0x8C; return success only for a nonzero result. /*0x7ff475*/
}
