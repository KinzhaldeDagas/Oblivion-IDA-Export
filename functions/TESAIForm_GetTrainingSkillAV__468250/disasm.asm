0x468250: movzx   eax, byte ptr [ecx+0Ch]; Decode TESAIForm's one-byte training-skill index at +0x0C into SkillActorValue by adding kSkillAV_Armorer (0x0C).
0x468254: add     eax, 0Ch
0x468257: retn
