0x436DA0: push    esi
0x436DA1: mov     esi, ecx
0x436DA3: mov     eax, [esi+4]
0x436DA6: test    eax, eax
0x436DA8: jz      short loc_436DE8
0x436DAA: mov     eax, [eax+8]
0x436DAD: test    eax, eax
0x436DAF: jz      short loc_436DC3
0x436DB1: push    5Fh ; '_'; Val
0x436DB3: push    eax; Str
0x436DB4: call    _strchr
0x436DB9: add     esp, 8
0x436DBC: test    eax, eax
0x436DBE: jz      short loc_436DC3
0x436DC0: mov     byte ptr [eax], 0
0x436DC3: mov     eax, [esi+4]
0x436DC6: push    edi
0x436DC7: mov     edi, [esp+8+Str]
0x436DCB: push    edi; modelPath
0x436DCC: push    eax; sequence
0x436DCD: call    TESAnimGroup_ParseKFModel; Authoritative Oblivion KF-to-TESAnimGroup parser. Consumes a NiControllerSequence and model path, resolves the fixed 43-group table, encodes filename movement/weapon prefixes, parses required action notes plus m:/Blend:/Sound:/Enum:, builds the +0x24/+0x28 event array, validates required-note ordering, and returns the constructed TESAnimGroup. Native scheduling uses each KF's authored note times; it does not impose fixed Hit timestamps. External StarShooting contrast after this native decode: deployed AttackLeft/AttackRight files instantiate class 4 as Start, Hit, a:R/a:L, End; TES3 Shoot Follow Attach is motion-only and not an Oblivion scheduler phase. The current CAS manifest applies groups 17/18/20/21 by broad weapon-name substrings Star/Throwing/Dart (12 rules over 8 files), so unrelated names can match. Its lightweight package validator checks only first/last Start/End and would not catch missing class-4 Hit/a: notes; the older six-file import log is stale.
0x436DD2: add     esp, 8
0x436DD5: push    eax; a2
0x436DD6: lea     ecx, [esi+8]; this
0x436DD9: call    NiSmartPointer_Set??
0x436DDE: mov     ecx, [esi+4]
0x436DE1: push    edi
0x436DE2: call    sub_434930
0x436DE7: pop     edi
0x436DE8: pop     esi
0x436DE9: retn    4
