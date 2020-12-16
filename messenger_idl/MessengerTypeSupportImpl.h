/* -*- C++ -*- */
/* Generated by /home/agilehealth_ai/DDS/OpenDDS-3.14.1/bin/opendds_idl version 3.14.1 (ACE version 6.2a_p19) running on input file Messenger.idl */
#ifndef OPENDDS_IDL_GENERATED_MESSENGERTYPESUPPORTIMPL_H_OEDHYS
#define OPENDDS_IDL_GENERATED_MESSENGERTYPESUPPORTIMPL_H_OEDHYS
#include "MessengerC.h"
#include "dds/DCPS/Definitions.h"
#include "dds/DdsDcpsC.h"
#include "MessengerTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: Messenger */



/* Begin STRUCT: Message */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

messenger_idl_test_Export
void gen_find_size(const Messenger::Message& stru, size_t& size, size_t& padding);

messenger_idl_test_Export
bool operator<<(Serializer& strm, const Messenger::Message& stru);

messenger_idl_test_Export
bool operator>>(Serializer& strm, Messenger::Message& stru);

messenger_idl_test_Export
size_t gen_max_marshaled_size(const Messenger::Message& stru, bool align);

messenger_idl_test_Export
size_t gen_max_marshaled_size(KeyOnly<const Messenger::Message> stru, bool align);

messenger_idl_test_Export
void gen_find_size(KeyOnly<const Messenger::Message> stru, size_t& size, size_t& padding);

messenger_idl_test_Export
bool operator<<(Serializer& strm, KeyOnly<const Messenger::Message> stru);

messenger_idl_test_Export
bool operator>>(Serializer& strm, KeyOnly<Messenger::Message> stru);

template <>
struct MarshalTraits<Messenger::Message> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger {
/// This structure supports use of std::map with one or more keys.
struct messenger_idl_test_Export Message_OpenDDS_KeyLessThan {
  bool operator()(const Messenger::Message& v1, const Messenger::Message& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.subject_id < v2.subject_id) return true;
    if (v2.subject_id < v1.subject_id) return false;
    return false;
  }
};
}


namespace Messenger {
class MessageTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Messenger::Message> {
  typedef Messenger::Message MessageType;
  typedef Messenger::MessageSeq MessageSequenceType;
  typedef Messenger::MessageTypeSupport TypeSupportType;
  typedef Messenger::MessageTypeSupportImpl TypeSupportTypeImpl;
  typedef Messenger::MessageDataWriter DataWriterType;
  typedef Messenger::MessageDataReader DataReaderType;
  typedef Messenger::Message_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Messenger::Message"; }
  static bool gen_has_key () { return true; }
  static size_t key_count () { return 1; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger {
class messenger_idl_test_Export MessageTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<MessageTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Message> TraitsType;
  typedef MessageTypeSupport TypeSupportType;
  typedef MessageTypeSupport::_var_type _var_type;
  typedef MessageTypeSupport::_ptr_type _ptr_type;

  MessageTypeSupportImpl() {}
  virtual ~MessageTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static MessageTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
messenger_idl_test_Export
const MetaStruct& getMetaStruct<Messenger::Message>();
messenger_idl_test_Export
bool gen_skip_over(Serializer& ser, Messenger::Message*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Message */

/* End MODULE: Messenger */
#endif /* OPENDDS_IDL_GENERATED_MESSENGERTYPESUPPORTIMPL_H_OEDHYS */
