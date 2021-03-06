#ifndef __CMDKSP_LANGUAGE_H__
#define __CMDKSP_LANGUAGE_H__

#include <string>
#include "langUtil.h"

namespace eIDMW
{
DEFINE_LANG_STR(MobileNumberDoesNotMatchCert) = {L"The inserted mobile number does not match the number associated with the selected certificate.", L"O n\u00famero de telem\u00f3vel inserido n\u00e3o corresponde ao n\u00famero associado ao certificado selecionado."};
DEFINE_LANG_STR(ConnectionError) = { L"A connection error has occurred.", L"Ocorreu um erro na liga��o" };
DEFINE_LANG_STR(PossibleProxyError) = { L"A connection error has occurred. Check proxy settings.", L"Ocorreu um erro na liga��o. Verifique a configura��o do proxy." };
DEFINE_LANG_STR(InvalidPinOrOtp) = { L"Invalid PIN or security code.", L"PIN ou c�digo de seguran�a inv�lido." };
DEFINE_LANG_STR(OtpValidationFailed) = { L"Validation of security code failed. The request was not found or validation time has expired.", L"N�o foi poss�vel validar o c�digo de confirma��o. O pedido n�o foi encontrado ou o tempo de valida��o expirou." };
DEFINE_LANG_STR(ConnectingWithServer) = { L"Connecting with server.", L"A conectar com o servidor.", L"", L"" };
DEFINE_LANG_STR(SendingOtp) = { L"Sending confirmation code to server.", L"Enviando o c�digo de confirma��o para o servidor.", L"", L"" };
}

#endif // __CMDKSP_LANGUAGE_H__
