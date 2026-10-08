0x468150: mov     dword ptr [ecx], offset ??_7TESAIForm@@6B@; const TESAIForm::`vftable'
0x468156: add     ecx, 10h
0x468159: jmp     BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
