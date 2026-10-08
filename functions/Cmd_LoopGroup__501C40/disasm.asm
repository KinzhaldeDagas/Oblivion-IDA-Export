0x501C40: sub     esp, 0Ch; LoopGroup command handler. Parses script/console LoopGroup arguments and drives animation group loop state on the target actor.
0x501C43: push    esi; repeatOrAction
0x501C44: mov     esi, [esp+10h+a4]
0x501C48: lea     eax, [esp+10h+encodedKey]
0x501C4C: push    eax
0x501C4D: mov     eax, [esp+14h+l]
0x501C51: lea     ecx, [esp+14h+playImmediately]
0x501C55: push    ecx
0x501C56: mov     ecx, [esp+18h+arg_10]
0x501C5A: lea     edx, [esp+18h+var_4]
0x501C5E: push    edx; UInt16
0x501C5F: mov     edx, [esp+1Ch+arg_C]
0x501C63: push    eax; l
0x501C64: mov     eax, [esp+20h+a3]
0x501C68: push    ecx; a6
0x501C69: mov     ecx, [esp+24h+arg_4]
0x501C6D: push    edx; a5
0x501C6E: mov     edx, [esp+28h+a1]
0x501C72: push    esi; a4
0x501C73: push    eax; a3
0x501C74: push    ecx; a2
0x501C75: push    edx; a1
0x501C76: mov     [esp+38h+playImmediately], 0
0x501C7E: mov     [esp+38h+encodedKey], 0
0x501C86: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x501C8B: add     esp, 28h
0x501C8E: test    al, al
0x501C90: jnz     short loc_501C97
0x501C92: pop     esi
0x501C93: add     esp, 0Ch
0x501C96: retn
0x501C97: test    esi, esi
0x501C99: jz      short loc_501CDB
0x501C9B: mov     eax, [esi]
0x501C9D: mov     edx, [eax+164h]
0x501CA3: mov     ecx, esi
0x501CA5: call    edx
0x501CA7: test    eax, eax
0x501CA9: jz      short loc_501CDB
0x501CAB: mov     eax, [esp+10h+playImmediately]
0x501CAF: mov     ecx, [esp+10h+encodedKey]
0x501CB3: mov     edx, dword ptr [esp+10h+var_4]
0x501CB7: push    eax; playImmediately
0x501CB8: mov     eax, [esi]
0x501CBA: push    ecx; encodedKey
0x501CBB: push    edx
0x501CBC: mov     edx, [eax+164h]
0x501CC2: mov     ecx, esi
0x501CC4: call    edx
0x501CC6: mov     ecx, eax; this
0x501CC8: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x501CCD: mov     eax, [esi]
0x501CCF: mov     edx, [eax+90h]
0x501CD5: push    1
0x501CD7: mov     ecx, esi
0x501CD9: call    edx
0x501CDB: mov     al, 1
0x501CDD: pop     esi
0x501CDE: add     esp, 0Ch
0x501CE1: retn
