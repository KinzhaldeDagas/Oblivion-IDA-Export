0x523310: mov     eax, [esp+arg_0]; TESNPC_SetAViBase: skills 0x0C..0x20 are stored as single bytes at TESNPC +0xEC + ActorValue_GetGroupOffsetFromAV(2,av). This confirms both >255 overflow and <0 underflow can wrap base skills.
0x523314: push    esi
0x523315: mov     esi, ecx
0x523317: lea     ecx, [eax-0Ch]
0x52331A: cmp     ecx, 14h
0x52331D: ja      short loc_523348
0x52331F: push    eax
0x523320: push    2
0x523322: call    ActorValue_GetGroupOffsetFromAV; RealArenaTraining fidelity pass: ActorValue_GetGroupOffsetFromAV(group, actorValue). Player skill-progress code calls this with group 2 before indexing player skillExp/requiredSkillExp.
0x523327: movsx   edx, al
0x52332A: mov     al, byte ptr [esp+0Ch+arg_4]
0x52332E: add     esp, 8
0x523331: push    200h; a2
0x523336: mov     ecx, esi; this
0x523338: mov     [edx+esi+0ECh], al
0x52333F: call    TESForm_MarkAsModified
0x523344: pop     esi
0x523345: retn    8
0x523348: lea     ecx, [eax-25h]
0x52334B: cmp     ecx, 2
0x52334E: jbe     short loc_52335D
0x523350: mov     edx, [esp+4+arg_4]
0x523354: push    edx
0x523355: push    eax
0x523356: mov     ecx, esi
0x523358: call    TESActorBase_SetAViBase
0x52335D: pop     esi
0x52335E: retn    8
