// Exact four-matrix difference test for non-null inputs. BUG: null handling is inverted: (null,null) returns true/different, while exactly one null returns false/equal. All three known Oblivion callers supply inline/concrete FaceGen matrices, so this is a latent defect and Prettier Faces does not patch unrelated comparison behavior.
bool __cdecl FaceGenHeadParameters_Differ(const FaceGenHeadParameters *left, const FaceGenHeadParameters *right)
{
  int v4; // ebp
  const FaceGenHeadParameters *v5; // ebx
  int v6; // esi
  const FaceGenMatrix *v7; // edi
  const FaceGenHeadParameters *lefta; // [esp+4h] [ebp+4h]

  if ( !left ) /*0x551996*/
    return !right;                              // BUG detail: when left is null, comparison against right branches so null/null returns true and null/non-null returns false. /*0x55199c*/
  if ( !right ) /*0x5519a7*/
    return 0; /*0x5519f6*/
  v4 = 0; /*0x5519ab*/
  lefta = (const FaceGenHeadParameters *)((char *)right - (char *)left); /*0x5519b0*/
  v5 = left; /*0x5519b4*/
  while ( 2 ) /*0x5519b7*/
  {
    v6 = 0; /*0x5519b7*/
    v7 = (const FaceGenMatrix *)v5; /*0x5519b9*/
    do /*0x5519db*/
    {
      if ( !FaceGenMatrix_Equals(v7, (const FaceGenMatrix *)((char *)lefta->matrices + (_DWORD)v7)) ) /*0x5519d0*/
        return 1; /*0x5519f5*/
      ++v6; /*0x5519d2*/
      ++v7; /*0x5519d5*/
    }
    while ( v6 < 2 ); /*0x5519db*/
    ++v4; /*0x5519dd*/
    v5 = (const FaceGenHeadParameters *)((char *)v5 + 0x30); /*0x5519e0*/
    if ( v4 < 2 ) /*0x5519e6*/
      continue; /*0x5519e6*/
    break;
  }
  return 0; /*0x5519a0*/
}
