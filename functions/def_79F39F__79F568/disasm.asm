0x79F568: push    eax; Malformed nested frond-texture token edge. Hex-Rays renders this shared exception path as JUMPOUT; it is not an unresolved vector-control-flow edge and does not alter the normal token 14001 termination path.
0x79F569: push    offset aMalformedFrond; "malformed frond texture information (to"...
0x79F56E: lea     esi, [esp+8+result]; result
0x79F575: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x79F57A: add     esp, 8
0x79F57D: push    ebx; appendSystemError
0x79F57E: push    eax; details
0x79F57F: lea     ecx, [esp+8+arg_54]; this
0x79F583: mov     [esp+8+arg_114], 3
0x79F58B: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x79F590: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x79F595: lea     ecx, [esp+4+arg_54]
0x79F599: push    ecx
0x79F59A: call    ThrowException??
