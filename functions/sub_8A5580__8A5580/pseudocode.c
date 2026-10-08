// ODismemberment: recursively walks NiAVObject children and dispatches the bhkConstraint attach/remove helpers on each bhkCollisionObject-backed node.
void __cdecl sub_8A5580(int a1, int a2)
{
  int BhkCollisionObject; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int i; // eax

  if ( a1 ) /*0x8a5587*/
  {
    BhkCollisionObject = NiAVObject_GetBhkCollisionObject(a1); /*0x8a558b*/
    if ( BhkCollisionObject ) /*0x8a5599*/
    {
      v3 = *(int **)(BhkCollisionObject + 0x10); /*0x8a559b*/
      if ( v3 ) /*0x8a55a0*/
      {
        if ( (_BYTE)a2 ) /*0x8a55a4*/
          sub_8A4BA0(v3); /*0x8a55a6*/
        else
          sub_8A53E0((NodeVoid *)v3); /*0x8a55ad*/
      }
    }
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x8a55ba*/
    v5 = v4; /*0x8a55bc*/
    if ( v4 ) /*0x8a55c0*/
    {
      v6 = *(unsigned __int16 *)(v4 + 0xB6); /*0x8a55c2*/
      v7 = 0; /*0x8a55c9*/
      if ( *(_WORD *)(v5 + 0xB6) ) /*0x8a55c2*/
      {
        if ( v6 ) /*0x8a55d1*/
          goto LABEL_11; /*0x8a55d1*/
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v5 + 0xB0) + 4 * v7) ) /*0x8a55d3*/
        {
          sub_8A5580(i, a2); /*0x8a55e2*/
          if ( *(unsigned __int16 *)(v5 + 0xB6) <= (unsigned int)++v7 ) /*0x8a55f6*/
            break; /*0x8a55f6*/
LABEL_11:
          ; /*0x8a55d7*/
        }
      }
    }
  }
}
