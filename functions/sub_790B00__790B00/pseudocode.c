// Clears the global/static compact branch-info vector used by CTreeEngine::Compute before rebuilding the recursive branch-info table.
_DWORD *__cdecl OB_CBranch_ClearStaticBranchInfoVector_010201A0()
{
  unsigned int *end; // ecx
  unsigned int *begin; // eax
  unsigned int *v2; // ebx
  unsigned int *v3; // edi
  OB_stVector4Iterator_010201A0 v5; // [esp-10h] [ebp-24h]
  OB_stVector4Iterator_010201A0 v6; // [esp-8h] [ebp-1Ch]
  OB_stVector4Iterator_010201A0 result; // [esp+Ch] [ebp-8h] BYREF

  end = lastOwner.end; /*0x790b00*/
  begin = lastOwner.begin; /*0x790b06*/
  v2 = lastOwner.end; /*0x790b13*/
  if ( lastOwner.begin > lastOwner.end ) /*0x790b15*/
  {
    _invalid_parameter_noinfo(); /*0x790b17*/
    end = lastOwner.end; /*0x790b1c*/
    begin = lastOwner.begin; /*0x790b22*/
  }
  v3 = begin; /*0x790b2e*/
  if ( begin > end ) /*0x790b30*/
    _invalid_parameter_noinfo(); /*0x790b32*/
  v6.current = v2; /*0x790b37*/
  v6.owner = &lastOwner; /*0x790b38*/
  v5.current = v3; /*0x790b39*/
  v5.owner = &lastOwner; /*0x790b3f*/
  return OB_stVector4_EraseRange_010201A0(&lastOwner, &result, v5, v6); /*0x790b4f*/
}
