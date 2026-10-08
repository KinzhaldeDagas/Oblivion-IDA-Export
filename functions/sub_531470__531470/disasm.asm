0x531470: push    ebx; Runs the selected INFO result on the speaker. Unless InfoRefusal (0x10), commits SayOnce state globally on the TESTopicInfo itself (spoken=1) and marks that form modified with 0x10000000; this state is not per actor.
0x531471: mov     ebx, [esp+4+speaker]
0x531475: test    ebx, ebx
0x531477: push    edi
0x531478: mov     edi, ecx
0x53147A: jz      short loc_5314CA
0x53147C: push    esi
0x53147D: call    TESTopicInfo__GetResultScript; Oblivion lazy INFO result-script loader. For a newly requested INFO, initializes a fresh shared temporary Script, opens the winning override record saved by the main INFO loader, and replays its entire chunk stream. Recognized result-script tags are SCHR, SCDA, and SCRO only. SCHD, SCTX, SLSD, SCVR, and SCRV are ignored. Repeated SCHR prefix-overlays ScriptInfo, repeated SCDA replaces compiled storage/size, and every SCRO appends in stream order. No inherited base-script state is reconstructed for a partial override.
0x531482: mov     esi, eax
0x531484: call    sub_4F9FA0
0x531489: test    al, al
0x53148B: jz      short loc_5314AC
0x53148D: test    esi, esi
0x53148F: jz      short loc_5314AC
0x531491: cmp     dword ptr [esi+20h], 0
0x531495: jz      short loc_5314AC
0x531497: push    1; ArgList
0x531499: push    0; int
0x53149B: lea     ecx, [ebx+44h]; this
0x53149E: call    ExtraDataList_GetExtraScriptEventList
0x5314A3: push    eax; int
0x5314A4: push    ebx; int
0x5314A5: mov     ecx, esi; int
0x5314A7: call    Script_Run
0x5314AC: movzx   eax, byte ptr [edi+25h]
0x5314B0: shr     eax, 4
0x5314B3: test    al, 1
0x5314B5: pop     esi
0x5314B6: jnz     short loc_5314CA; InfoRefusal marks a noncommitting refusal response: its result script may run, but TESTopicInfo.spoken is not set. This also lets an authored low-disposition fallback INFO serve as its own refusal instead of being replaced by stock FormID 118.
0x5314B8: mov     edx, [edi]
0x5314BA: mov     eax, [edx+40h]
0x5314BD: push    10000000h
0x5314C2: mov     ecx, edi
0x5314C4: mov     byte ptr [edi+22h], 1; RunResult commits spoken before MarkAsModified. This occurs at the caller's commit point, not when selection succeeds or audio merely begins.
0x5314C8: call    eax; Virtual MarkAsModified(kTopicInfoModified_Spoken). The change-mask bit is sufficient to save/reload spoken=true; the generic modified saver writes no payload for this high bit.
0x5314CA: pop     edi
0x5314CB: pop     ebx
0x5314CC: retn    4
