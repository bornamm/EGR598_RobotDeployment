# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robdep_interfaces:msg/BlobData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BlobData(type):
    """Metaclass of message 'BlobData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robdep_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robdep_interfaces.msg.BlobData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__blob_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__blob_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__blob_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__blob_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__blob_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BlobData(metaclass=Metaclass_BlobData):
    """Message class 'BlobData'."""

    __slots__ = [
        '_color',
        '_x_point',
        '_y_point',
        '_size',
    ]

    _fields_and_field_types = {
        'color': 'string',
        'x_point': 'double',
        'y_point': 'double',
        'size': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.color = kwargs.get('color', str())
        self.x_point = kwargs.get('x_point', float())
        self.y_point = kwargs.get('y_point', float())
        self.size = kwargs.get('size', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.color != other.color:
            return False
        if self.x_point != other.x_point:
            return False
        if self.y_point != other.y_point:
            return False
        if self.size != other.size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'color' field must be of type 'str'"
        self._color = value

    @property
    def x_point(self):
        """Message field 'x_point'."""
        return self._x_point

    @x_point.setter
    def x_point(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_point' field must be of type 'float'"
        self._x_point = value

    @property
    def y_point(self):
        """Message field 'y_point'."""
        return self._y_point

    @y_point.setter
    def y_point(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_point' field must be of type 'float'"
        self._y_point = value

    @property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'size' field must be of type 'float'"
        self._size = value
